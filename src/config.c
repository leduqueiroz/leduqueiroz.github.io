#include "config.h"

const struct timing_config timing = {
	.tick_delta		= 0.016f
};

const char *nord_palette[16] = {
	"#2E3440", "#3B4252", "#434C5E", "#4C566A",
	"#D8DEE9", "#E5E9F0", "#ECEFF4",
	"#8FBCBB", "#88C0D0", "#81A1C1", "#5E81AC",
	"#BF616A", "#D08770", "#EBCB8B", "#A3BE8C", "#B48EAD"
};

const struct theme theme_dark = {
	.bg          = 0,
	.text        = 6,
	.dim_text    = 9,
	.accent      = 14,
	.code_bg     = 1,
	.code_border = 3
};

const struct theme theme_light = {
	.bg          = 6,
	.text        = 0,
	.dim_text    = 3,
	.accent      = 14,
	.code_bg     = 5,
	.code_border = 4
};

const char *css_theme_toggle =
	"position: fixed; top: 20px; right: 20px; "
	"font-size: 14px; user-select: none; cursor: pointer;";

const char *css_nav_blog =
	"position: fixed; top: 20px; right: 80px; "
	"font-size: 14px; user-select: none; cursor: pointer;";

const char *css_nav_home =
	"position: fixed; top: 20px; right: 140px; "
	"font-size: 14px; user-select: none; cursor: pointer;";

const char *css_feed = "padding: 20px; max-width: 900px; margin-top: 100px; min-height: calc(100vh - 180px - 100px);";

const char *css_footer =
	"width: 100%; padding: 24px 0; display: flex; flex-direction: column; "
	"align-items: center; justify-content: space-between; "
	"background-color: var(--bg-color); color: var(--text-color); "
	"font-size: 14px; margin-top: 40px;";

const char *msg_header = "EDUARDO QUEIRÓZ";
const char *msg_name = "Eduardo Queiróz";
const char *msg_github_url = "https://github.com/leduqueiroz";

const char *msg_bio =
	"Engenheiro de software focado na construção de sistemas distribuídos, "
	"arquitetura em cloud, design orientado a eventos e microserviços. "
	"Principais interesses incluem plataformas de mensageria, orquestração de "
	"containers, system design e liderança técnica em ambientes ágeis.\n\n"
	"Áreas de interesse: arquiteturas distribuídas e sistemas escaláveis, "
	"computação em nuvem e plataformas cloud-native, arquiteturas orientadas a "
	"eventos e mensageria, microserviços e design de sistemas, containerização "
	"e orquestração (Docker, Kubernetes), liderança técnica e times ágeis.\n\n"
	"Tecnologias: C#, .NET, TypeScript | Azure, Docker, Kubernetes, IaC | "
	"Kafka, RabbitMQ, Azure Service Bus | microserviços, sistemas distribuídos, "
	"arquitetura orientada a eventos | system design, escalabilidade, "
	"resiliência, observabilidade.";

const char *msg_seo =
	"Engenheiro de software especializado em sistemas distribuídos, arquitetura "
	"cloud-native, design orientado a eventos e microserviços. Experiência com "
	"C#, .NET, TypeScript, Azure, Docker, Kubernetes, Kafka, RabbitMQ e "
	"Azure Service Bus. Foco em system design, escalabilidade, resiliência e "
	"liderança técnica em ambientes ágeis.";

const char *msg_404_title = "404 - NOT FOUND";
const char *msg_404_body = "The page you are looking for does not exist or has been moved.";

const char *code_block_pre =
	"background:var(--code-bg-color);"
	"padding:16px;"
	"border-radius:4px;"
	"overflow-x:auto;"
	"border:1px solid var(--code-border-color);"
	"margin:20px 0;";

const char *code_block_code =
	"font-family:'Courier New',monospace;"
	"font-size:14px;"
	"line-height:1.5;"
	"color:var(--text-color);";

const char *footer_style =
		"<div style=\"max-width:900px;margin:0 auto;padding:0 20px;\">"
		"<div style=\"display:flex;justify-content:space-between;align-items:center;gap:16px;\">"
		"<div style=\"font-size:14px;display:flex;align-items:center;gap:8px;\">"
		"<span>&copy; %d</span>"
		"<span style=\"color:var(--dim-text-color)\">&bull;</span>"
		"<span>Vim powered</span>"
		"<span style=\"color:var(--dim-text-color)\">&bull;</span>"
		"<a href=\"%s\" target=\"_blank\" style=\"color:var(--text-color);text-decoration:none;\">GitHub</a>"
		"</div></div></div>";
