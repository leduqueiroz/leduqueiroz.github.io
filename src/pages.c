#include <string.h>
#include <stddef.h>
#include <time.h>

#include "pages.h"
#include "config.h"
#include "ui.h"
#include "assets.h"

void page_render_home(void) {
	static const char snake_path[] = "public/snake.svg";
	add_centered_image(snake_path, sizeof(snake_path) - 1, "", 0);
	add_heading(msg_name, strlen(msg_name));
	add_paragraph(msg_bio, strlen(msg_bio));

	update_seo_metadata("Eduardo Queiróz - Home", msg_seo, "#/");
}

void page_render_blog(void) {
	const char *header = "Blog Index";
	int i;

	add_paragraph(header, strlen(header));
	for (i = 0; i < posts_count; i++) {
		add_blog_entry(posts[i].title, posts[i].date, posts[i].slug, i);
	}

	update_seo_metadata("Eduardo Queiroz - Blog",
		"Blog archive and articles about formal methods, programming languages, and systems.",
		"#/blog");
}

void page_render_404(void) {
	add_paragraph(msg_404_title, strlen(msg_404_title));
	add_paragraph(msg_404_body, strlen(msg_404_body));

	update_seo_metadata("Eduardo Queiroz - 404", msg_404_body, "#/404");
}

void page_add_footer(void) {
	time_t t;
	struct tm tm;
	int year;

	t = time(NULL);
	tm = *localtime(&t);
	year = tm.tm_year + 1900;

	add_footer(year, css_footer, msg_github_url);
}
