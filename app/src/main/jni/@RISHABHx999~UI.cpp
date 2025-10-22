#include <android/log.h>
#include <unistd.h>
#include <thread>
#include <limits>
#include <KittyMemory/KittyMemory.h>
#include <KittyMemory/MemoryPatch.h>
#include <KittyMemory/KittyScanner.h>
#include <KittyMemory/KittyUtils.h>
#include "oxorany/oxorany.h"
#include <xdl.h>
#include <KittyUtils.h>
#include <KittyMemory.h>
#include <Il2Cpp.h>
#include <SubstrateHook.h>
#include <CydiaSubstrate.h>
#include "RISHABH~HOOKS/gui.hpp"
#include "il2cpp.h"
#include "RISHABH~TOOLS/Land.hpp"
#include "imgui/imgui.h"
#include "imgui/stb_image.h"
#include "imgui/backends/imgui_impl_android.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include <Themes.h>
#include "RISHABH~TOOLS/Firewall.h"
#include "RISHABH~TOOLS/exptime.h"
#include "RISHABH~TOOLS/Chams.h"
#include "RISHABH~TOOLS/Land.h"
#include "RISHABH~TOOLS/CN.h"
#include "RISHABH~TOOLS/lundbda.h"
#include "RISHABH~TOOLS/fontch.h"
#include "Icon/OPPOSans-H.h"
#include "RISHABH~PAPAJI/Icon.h"
#include "RISHABH~PAPAJI/Iconcpp.h"
#include <fstream>
void (*OpenURL)(String *url);
#include "GHr_Ryuuka/Tools/Call_Tools.h"
using json = nlohmann::json;
time_t rng = 0;
std::string g_Token, g_Auth;
#include "Login.h"

#include "Fonts.h"
ImFont* poppins_mediumf = nullptr;
ImFont* poppins_medium_low = nullptr;

//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//

using zygisk::Api;
using zygisk::AppSpecializeArgs;
using zygisk::ServerSpecializeArgs;

#define ALPHA    ( ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_NoTooltip | ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_AlphaBar | ImGuiColorEditFlags_InputRGB | ImGuiColorEditFlags_Float | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoBorder )
#define NO_ALPHA ( ImGuiColorEditFlags_NoTooltip    | ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_NoLabel | ImGuiColorEditFlags_NoAlpha | ImGuiColorEditFlags_InputRGB | ImGuiColorEditFlags_Float | ImGuiColorEditFlags_NoDragDrop | ImGuiColorEditFlags_PickerHueBar | ImGuiColorEditFlags_NoBorder )

void HueText(const char* text, ImVec4 color)
{
    static auto start_time = std::chrono::high_resolution_clock::now();
    auto elapsed_seconds = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - start_time).count() / 1000.0f; 
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 1.0f, 0.0f)); 
    for (int i = 0; i < strlen(text); i++)
    {
      ImGui::SameLine();
        float t = fmodf(elapsed_seconds + (float)i / (float)strlen(text), 0.65f); 
        ImVec4 currentColor = ImVec4(color.x * t, color.y * t, color.z * t, color.w); 
        ImGui::PushStyleColor(ImGuiCol_Text, currentColor); 
        ImGui::Text("%c", text[i]); 
        ImGui::PopStyleColor(); 
    }
    ImGui::PopStyleColor(); 
}
/*
*/
void hack();
void writeLog(const std::string& logMessage, const std::string& filename = "/storage/emulated/0/Android/data/com.dualspace.multispace.androidx/files/log.txt");


 


class MyModule : public zygisk::ModuleBase {
 public:
  void onLoad(Api *api, JNIEnv *env) override {
    this->api_ = api;
    this->env_ = env;
    genv = env;
   // gEnv = env;

  }

  void preAppSpecialize(AppSpecializeArgs *args) override {
    static constexpr const char *packages[] = {
        "com.dts.freefireth"
    };
    const char *process = env_->GetStringUTFChars(args->nice_name, nullptr);
    for (const auto *package: packages) {
      is_game_ = (strcmp(process, package) == 0);
      if (is_game_) {
        break;
      }
    }
    env_->ReleaseStringUTFChars(args->nice_name, process);
  }

  void postAppSpecialize(const AppSpecializeArgs *args) override {
    if (is_game_) {
       genv->GetJavaVM(&jvm);
     //  genv->GetJavaVM(&gJvm);
      std::thread{hack}.detach();
    }
  }

 private:
  Api *api_ = nullptr;
  JNIEnv *env_ = nullptr;
  bool is_game_ = false;
};


uintptr_t il2cpp_base = 0;
void *getRealAddr(ulong offset) {
    return reinterpret_cast<void*>(il2cpp_base + offset);
};

#include "imgui.h"
#include <cmath>


bool RainbowToggleSwitch(const char* label, bool* v)
{
    ImGui::PushID(label);

    static float knob_anim = 0.0f;
    static float hue_offset = 0.0f;

    float width = 110.0f;
    float height = 40.0f;
    float knob_radius = 16.0f;

    ImVec2 p = ImGui::GetCursorScreenPos();
    ImDrawList* draw_list = ImGui::GetWindowDrawList();

    ImU32 bgColor = *v ? IM_COL32(0, 200, 150, 255) : IM_COL32(180, 180, 180, 255);
    ImU32 textColor = IM_COL32(0, 0, 0, 255);

    // Background
    draw_list->AddRectFilled(p, ImVec2(p.x + width, p.y + height), bgColor, height * 0.5f);

    // Animate knob position
    float target = *v ? 1.0f : 0.0f;
    knob_anim = ImLerp(knob_anim, target, 0.1f); // smoothing

    float knob_x = ImLerp(p.x + knob_radius + 6, p.x + width - knob_radius - 6, knob_anim);
    ImVec2 knob_center = ImVec2(knob_x, p.y + height / 2);

    // Rotate rainbow
    hue_offset += 0.01f;
    if (hue_offset > 1.0f) hue_offset -= 1.0f;

    // Draw rainbow circle
    float inner_radius = 0.0f;
    float outer_radius = knob_radius;
    int segments = 100;
    for (int i = 0; i < segments; ++i)
    {
        float a0 = (i / (float)segments) * 2.0f * IM_PI;
        float a1 = ((i + 1) / (float)segments) * 2.0f * IM_PI;

        ImVec2 p0 = ImVec2(knob_center.x + cosf(a0) * inner_radius, knob_center.y + sinf(a0) * inner_radius);
        ImVec2 p1 = ImVec2(knob_center.x + cosf(a1) * inner_radius, knob_center.y + sinf(a1) * inner_radius);
        ImVec2 p2 = ImVec2(knob_center.x + cosf(a1) * outer_radius, knob_center.y + sinf(a1) * outer_radius);
        ImVec2 p3 = ImVec2(knob_center.x + cosf(a0) * outer_radius, knob_center.y + sinf(a0) * outer_radius);

        float hue = fmodf(i / (float)segments + hue_offset, 1.0f);
        ImU32 col = ImColor::HSV(hue, 1.0f, 1.0f);

        draw_list->AddQuadFilled(p0, p1, p2, p3, col);
    }

    // Text ON/OFF
    const char* text = *v ? "ON" : "OFF";
    ImVec2 textSize = ImGui::CalcTextSize(text);
    ImVec2 textPos = ImVec2(
        *v ? (p.x + 12) : (p.x + width - textSize.x - 12),
        p.y + (height - textSize.y) / 2
    );
    draw_list->AddText(textPos, textColor, text);

    // Toggle button (interaction)
    ImGui::InvisibleButton("##switch", ImVec2(width, height));
    if (ImGui::IsItemClicked())
        *v = !*v;

    // Ending format matching CustomToggleSwitch
    ImGui::SameLine();
    ImGui::Text(label);

    ImGui::PopID();
    return *v;
}

// --- Left Nav Button (tab button) ---
static bool LeftNavButton(const char* label, const char* icon, bool selected, ImVec2 size = ImVec2(160, 65)) {
    ImDrawList* dl = ImGui::GetWindowDrawList();
    ImVec2 pos = ImGui::GetCursorScreenPos();
    ImRect bb(pos, ImVec2(pos.x + size.x, pos.y + size.y));

    ImU32 bg_col = selected ? IM_COL32(26, 26, 26, 200) : IM_COL32(26, 26, 26, 200);
    dl->AddRectFilled(bb.Min, bb.Max, bg_col, 10.0f);
    dl->AddRect(bb.Min, bb.Max, IM_COL32(200, 0, 255, 255), 10.0f, ImDrawFlags_RoundCornersAll, 2.0f);

    ImVec2 icon_pos(pos.x + 16, pos.y + 20);
    ImVec2 text_pos(icon_pos.x + 28, pos.y + 20);
    dl->AddText(icon_pos, IM_COL32(255,255,255,255), icon);
    dl->AddText(text_pos, IM_COL32(255,255,255,255), label);

    ImGui::InvisibleButton(label, size);
    bool clicked = ImGui::IsItemClicked();

    return clicked;
}

namespace Settings
{
static int Tab = 1;
}

#define ICON_FA_WINDOW_MINIMIZE "\xef\x8a\x96"

void SetupImgui() {
IMGUI_CHECKVERSION();
//InitTexture();
ImGui::CreateContext();
ImGui_ImplOpenGL3_Init("#version 300 es");

            ImGuiIO &io = ImGui::GetIO();
            
// PAPAJI RISHABH UI JO CREDIT NAHI DEGA VO RANDI KA BACCHA 😡
ImGuiStyle& style = ImGui::GetStyle();
ImVec4* colors = style.Colors;

// ====== WINDOW COLORS ======
colors[ImGuiCol_WindowBg]         = ImColor(26, 26, 26, 200); // @RISHABHx999
colors[ImGuiCol_ChildBg]          = ImColor(26, 26, 26, 200); // @RISHABHx999
colors[ImGuiCol_PopupBg]          = ImColor(26, 26, 26, 200); // @RISHABHx999
colors[ImGuiCol_Border]           = ImColor(200, 0, 255, 200); // @RISHABHx999
colors[ImGuiCol_BorderShadow]     = ImVec4(0, 0, 0, 0);

// ====== BUTTON COLORS ======
colors[ImGuiCol_Button]           = ImColor(108, 82, 255, 255);  // @RISHABHx999
colors[ImGuiCol_ButtonHovered]    = ImColor(108, 82, 255, 255);  // @RISHABHx999
colors[ImGuiCol_ButtonActive]     = ImColor(108, 82, 255, 255);  // @RISHABHx999

// ====== TEXT COLORS ======
colors[ImGuiCol_Text]             = ImVec4(1.00f, 1.00f, 1.00f, 1.00f); // @RISHABHx999
colors[ImGuiCol_TextDisabled]     = ImVec4(0.50f, 0.50f, 0.50f, 1.00f); // @RISHABHx999

// ====== FRAME COLORS ======
colors[ImGuiCol_FrameBg]          = ImVec4(0.08f, 0.08f, 0.08f, 1.00f); // @RISHABHx999
colors[ImGuiCol_FrameBgHovered]   = ImVec4(0.08f, 0.08f, 0.08f, 1.00f); // @RISHABHx999
colors[ImGuiCol_FrameBgActive]    = ImVec4(0.08f, 0.08f, 0.08f, 1.00f); // @RISHABHx999

// ====== TAB / HEADER ======
colors[ImGuiCol_Header]           = ImColor(200, 0, 255, 255); // @RISHABHx999
colors[ImGuiCol_HeaderHovered]    = ImColor(200, 0, 255, 255); // @RISHABHx999
colors[ImGuiCol_HeaderActive]     = ImColor(200, 0, 255, 255); // @RISHABHx999

// ====== SLIDER / CHECKBOX ======
colors[ImGuiCol_SliderGrab]       = ImColor(200, 0, 255, 255); // @RISHABHx999
colors[ImGuiCol_SliderGrabActive] = ImColor(200, 0, 255, 255); // @RISHABHx999
colors[ImGuiCol_CheckMark]        = ImColor(200, 0, 255, 255); // @RISHABHx999

// ====== BORDER & WINDOW SETTINGS ======
style.WindowBorderSize  = 3.0f;  // @RISHABHx999
style.FrameBorderSize   = 2.0f;  // @RISHABHx999
style.ChildBorderSize   = 3.0f;  // @RISHABHx999
style.PopupBorderSize   = 2.0f;		// @RISHABHx999

style.WindowRounding    = 12.0f;   // @RISHABHx999
style.FrameRounding     = 8.0f;	// @RISHABHx999
style.GrabRounding      = 0.0f;	// @RISHABHx999
style.ChildRounding     = 12.0f;	// @RISHABHx999

style.WindowPadding     = ImVec2(18.0f, 18.0f);	// @RISHABHx999
style.FramePadding      = ImVec2(10.0f, 6.0f);	// @RISHABHx999
style.ItemSpacing       = ImVec2(10.0f, 10.0f);	// @RISHABHx999
style.ItemInnerSpacing  = ImVec2(6.0f, 6.0f);	// @RISHABHx999

// ====== OPTIONAL FONT STYLE ======
style.WindowTitleAlign  = ImVec2(0.5f, 0.5f); // @RISHABHx999
style.DisplaySafeAreaPadding = ImVec2(0, 0);	// @RISHABHx999

            io.ConfigWindowsMoveFromTitleBarOnly = true;
            io.IniFilename = NULL;

            static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
            ImFontConfig icons_config;

            ImFontConfig CustomFont;
            CustomFont.FontDataOwnedByAtlas = false;

            icons_config.MergeMode = true;
            icons_config.PixelSnapH = true;
            icons_config.OversampleH = 2.5;
            icons_config.OversampleV = 2.5;
            
          io.Fonts->AddFontFromMemoryTTF(&PoppinsRegular, sizeof PoppinsRegular, 29, NULL, io.Fonts->GetGlyphRangesVietnamese());
		  io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 30.0f, &icons_config, icons_ranges);
		  io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(Custom), sizeof(Custom), 24.f, &CustomFont);
         // memset(&Config, 0, sizeof(sConfig));
//

//ImFontConfig CustomFont;
CustomFont.FontDataOwnedByAtlas = false;
//font_cfg.SizePixels = 22.0f;
static const ImWchar vietnamese_chars[] = {
0x0020, 0x00FF, // Basic Latin + Latin Supplement
0x0102, 0x0103, // Â, â
0x0110, 0x0111, // Đ, đ
0x0128, 0x0129, // Ĩ, ĩ
0x0168, 0x0169, // Ũ, ũ
0x01A0, 0x01A1, // Ơ, ơ
0x01AF, 0x01B0, // Ư, ư
0x1EA0, 0x1EF9, // Vietnamese specific characters
0 // null-terminated list
};
}


bool clearMousePos = true;
bool ImGuiOK = false;
bool initImGui = false;


void VerticalTab(const char* label, int tab_index, int* p_selected_tab) {
ImGuiStyle& style = ImGui::GetStyle();
ImVec4* colors = style.Colors;

// Push custom colors for the selected and unselected states
ImVec4 color = ImColor(0, 150, 255, 5);
ImVec4 colorActive = ImColor(0, 150, 255, 5);
ImVec4 colorHovered = ImColor(0, 150, 255, 5);

if (tab_index == *p_selected_tab) {
// This is the selected tab, make it blue like in the image
ImGui::PushStyleColor(ImGuiCol_Button, colorActive);
ImGui::PushStyleColor(ImGuiCol_ButtonHovered, colorActive);
ImGui::PushStyleColor(ImGuiCol_ButtonActive, colorActive);
} else {
// Unselected tabs are dark
ImGui::PushStyleColor(ImGuiCol_Button, color);
ImGui::PushStyleColor(ImGuiCol_ButtonHovered, colorHovered);
ImGui::PushStyleColor(ImGuiCol_ButtonActive, colorActive);
}

if (ImGui::Button(label, ImVec2(200, 50))) { // Button size (width, height)
*p_selected_tab = tab_index;
}

if (tab_index == *p_selected_tab) {
ImDrawList* draw_list = ImGui::GetWindowDrawList();
const ImVec2 p_min = ImGui::GetItemRectMin();
const ImVec2 p_max = ImGui::GetItemRectMax();

ImU32 line_color = IM_COL32(50, 150, 255, 255);
float line_thickness = 8.0f;

draw_list->AddLine(
ImVec2(p_min.x, p_min.y), 
ImVec2(p_min.x, p_max.y), 
line_color, 
line_thickness
);
}

ImGui::PopStyleColor(3);
}

static int selected_tab = 0;
inline EGLBoolean (*old_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);
inline EGLBoolean hook_eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
    
        eglQuerySurface(dpy, surface, EGL_WIDTH, &g_GlWidth);
    eglQuerySurface(dpy, surface, EGL_HEIGHT, &g_GlHeight);
    
    


    if (!g_IsSetup) {
        prevWidth = g_GlWidth;
        prevHeight = g_GlHeight;
        SetupImgui();
        
        g_IsSetup = true;
    }
    
 // Window background = black

    ImGuiIO &io = ImGui::GetIO();
	//Darkness();
	// Thiết lập màu chủ đề
	//ImVec4* colors = ImGui::GetStyle().Colors;


    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplAndroid_NewFrame(g_GlWidth, g_GlHeight);
    ImGui::NewFrame();
	if (ImGuiOK) {
	    int touchCount = (((int (*)())(Il2CppGetMethodOffset(OBFUSCATE("UnityEngine.dll"), OBFUSCATE("UnityEngine"), OBFUSCATE("Input"), OBFUSCATE("get_touchCount"))))());
	if (touchCount > 0) {
		UnityEngine_Touch_Fields touch = ((UnityEngine_Touch_Fields(*)(int))(Il2CppGetMethodOffset(OBFUSCATE("UnityEngine.dll"), OBFUSCATE("UnityEngine"), OBFUSCATE("Input"), OBFUSCATE("GetTouch"), 1)))(0);
		float reverseY = io.DisplaySize.y - touch.m_Position.fields.y;
		switch (touch.m_Phase) {
		case TouchPhase::Began:
		case TouchPhase::Stationary:
			io.MousePos = ImVec2(touch.m_Position.fields.x, reverseY);
			io.MouseDown[0] = true;
			break;
		case TouchPhase::Ended:
		case TouchPhase::Canceled:
			io.MouseDown[0] = false;
			clearMousePos = true;
		break; case TouchPhase::Moved:
			io.MousePos = ImVec2(touch.m_Position.fields.x, reverseY);
		break; default:break;
		}
	}
	}
	
	DrawESP(g_GlWidth, g_GlHeight);
	
	ImDrawList*draw = ImGui::GetBackgroundDrawList();

//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//

    // Font Awesome icon defines
    #define ICON_FA_CROSSHAIRS "\xef\x81\x9b"
    #define ICON_FA_EYE "\xef\x81\xae"
    #define ICON_FA_FIRE "\xef\x81\xad"
    #define ICON_FA_USER_SECRET "\xef\x88\x9b"
	
    ImGui::SetNextWindowSize(ImVec2(650, 550), ImGuiCond_Once);
	ImGui::Begin(OBFUSCATE(ICON_FA_SHIELD "  NIKU BIRTHDAY SPECIAL SRC BY RISHABH  "), 0, ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoScrollbar);
	
    ImDrawList* dl = ImGui::GetWindowDrawList();
    ImVec2 pos = ImGui::GetWindowPos();
    ImVec2 size = ImGui::GetWindowSize();

    static int tab = 0; // 0:AIMBOT, 1:VISUAL, 2:BRUTAL, 3:CHAMS
	
    // ---- LEFT SIDE (Tabs) ----
	ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 3.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 45.0f);
	ImGui::PushStyleColor(ImGuiCol_Border, ImColor(200, 0, 255, 200).Value);

    ImGui::PopStyleColor();
    ImGui::BeginChild("LeftTabs", ImVec2(200, 560), true);
    ImGui::Spacing();
    if (LeftNavButton("  AIMBOT", ICON_FA_CROSSHAIRS, tab == 0)) tab = 0;
    ImGui::Spacing();
    if (LeftNavButton("  VISUAL", ICON_FA_EYE, tab == 1)) tab = 1;
    ImGui::Spacing();
    if (LeftNavButton("  BRUTAL", ICON_FA_FIRE, tab == 2)) tab = 2;
    ImGui::Spacing();
    if (LeftNavButton("  INFO", ICON_FA_USER_SECRET, tab == 3)) tab = 3;
    ImGui::EndChild();

    ImGui::SameLine();

    // ---- RIGHT SIDE (Tab Content) ----
	ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 3.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 45.0f);
	ImGui::PushStyleColor(ImGuiCol_Border, ImColor(200, 0, 255, 200).Value);

	ImGui::BeginChild("AimbotChild", ImVec2(450, 560), true);
    ImGui::Spacing();
    
    switch (tab) {
        case 0: // AIMBOT
            RainbowToggleSwitch(" ACTIVE FUNCTION", &Enable);
            ImGui::Spacing();
            RainbowToggleSwitch(" AIMBOT", &Aimbot);
            ImGui::Spacing();
            ImGui::SliderFloat(("AIM FOV"), &Fov_Aim, 0.0f, 1000.0f, "%.0f°", ImGuiSliderFlags_AlwaysClamp | ImGuiSliderFlags_NoInput);
            if (ImGui::Button("JOIN TELEGRAM", ImVec2(250, 45))) 
            {
            OpenURL(Il2CppString::Create("https://t.me/+cTSklccrnJEzODdl"));
            }
            break;
        case 1: // VISUAL
            RainbowToggleSwitch(" ESP LINE", &Config.ESP.Line);
            ImGui::Spacing();
            RainbowToggleSwitch(" ESP BOX", &Config.ESP.Box);
            ImGui::Spacing();
            RainbowToggleSwitch(" ESP HEALTH", &Config.ESP.Health);
            break;
        case 2: // BRUTAL
            RainbowToggleSwitch(" AIMKILL", &AimKill1);
            ImGui::Spacing();
            RainbowToggleSwitch(" SPEED 50x", &SpeedHack);
            ImGui::Spacing();
            break;
        case 3: // INFO
        
        // YAHA PE AP LOG APNA INFO DAL LENA OKK AND BHAI CREDIT DEDENA 🥲

            break;
    }

    ImGui::EndChild();
    ImGui::End();
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        return old_eglSwapBuffers(dpy, surface);
}
//}
typedef unsigned long DWORD;
static uintptr_t libBase;

uintptr_t string2Offset(const char *c) {
    int base = 16;
    // See if this function catches all possibilities.
    // If it doesn't, the function would have to be amended
    // whenever you add a combination of architecture and
    // compiler that is not yet addressed.
    static_assert(sizeof(uintptr_t) == sizeof(unsigned long)
                  || sizeof(uintptr_t) == sizeof(unsigned long long),
                  "Please add string to handle conversion for this architecture.");

    // Now choose the correct function ...
    if (sizeof(uintptr_t) == sizeof(unsigned long)) {
        return strtoul(c, nullptr, base);
    }

    // All other options exhausted, sizeof(uintptr_t) == sizeof(unsigned long long))
    return strtoull(c, nullptr, base);
}


inline void hack_injec();
inline void StartGUI() {
    void *ptr_eglSwapBuffer = DobbySymbolResolver("/system/lib/libEGL.so", "eglSwapBuffers");
    if (NULL != ptr_eglSwapBuffer) {
        DobbyHook((void *)ptr_eglSwapBuffer, (void*)hook_eglSwapBuffers, (void**)&old_eglSwapBuffers);
            LOGD("Gui Started");
			hack_injec();
        }
    }

bool libLoaded = false;

DWORD findLibrary(const char *library) {
    char filename[0xFF] = {0},
            buffer[1024] = {0};
    FILE *fp = NULL;
    DWORD address = 0;

    sprintf(filename, OBFUSCATE("/proc/self/maps"));

    fp = fopen(filename, OBFUSCATE("rt"));
    if (fp == NULL) {
        perror(OBFUSCATE("fopen"));
        goto done;
    }

    while (fgets(buffer, sizeof(buffer), fp)) {
        if (strstr(buffer, library)) {
            address = (DWORD) strtoul(buffer, NULL, 16);
            goto done;
        }
    }

    done:

    if (fp) {
        fclose(fp);
    }

    return address;
}

DWORD getAbsoluteAddress(const char *libraryName, DWORD relativeAddr) {
    libBase = findLibrary(libraryName);
    if (libBase == 0)
        return 0;
    return (reinterpret_cast<DWORD>(libBase + relativeAddr));
}
ProcMap unityMap, anogsMap, il2cppMap;
using KittyScanner::RegisterNativeFn;



    
    
void hack() {
     LOGD("Inject Ok");
    //std::thread thread_hack(hack_thread, getpid());
    //thread_hack.detach();
    
}
uintptr_t get_symbol_addr_in_pid(pid_t pid, const char* libname, uintptr_t offset_in_lib) {
    char maps_path[64];
    snprintf(maps_path, sizeof(maps_path), "/proc/%d/maps", pid);

    FILE* fp = fopen(maps_path, "r");
    if (!fp) return 0;

    char line[512];
    uintptr_t base = 0;

    while (fgets(line, sizeof(line), fp)) {
        if (strstr(line, libname)) {
            sscanf(line, "%lx-%*lx", &base);
            break;
        }
    }
    fclose(fp);

    if (base == 0) return 0;
    return base + offset_in_lib;
}

pid_t get_pid_by_name(const char* process_name) {
    DIR* proc_dir = opendir("/proc");
    if (!proc_dir) return -1;

    struct dirent* entry;
    while ((entry = readdir(proc_dir)) != NULL) {
        if (entry->d_type != DT_DIR) continue;

        pid_t pid = atoi(entry->d_name);
        if (pid <= 0) continue;

        char cmdline_path[256];
        snprintf(cmdline_path, sizeof(cmdline_path), "/proc/%d/cmdline", pid);

        FILE* fp = fopen(cmdline_path, "r");
        if (!fp) continue;

        char cmdline[256];
        fgets(cmdline, sizeof(cmdline), fp);
        fclose(fp);

        if (strstr(cmdline, process_name)) {
            closedir(proc_dir);
            return pid;
        }
    }

    closedir(proc_dir);
    return -1;
}

void writeLog(const std::string& logMessage, const std::string& filename) {
    std::ofstream outFile(filename, std::ios::app); // Mở file ở chế độ append (thêm)
    if (outFile.is_open()) {
        outFile << logMessage << std::endl;
        outFile.close();
    } else {
        std::cerr << "Không thể mở file log: " << filename << std::endl;
    }
}

bool is_current_process(const char* target_name) {
    char cmdline_path[64];
    snprintf(cmdline_path, sizeof(cmdline_path), "/proc/%d/cmdline", getpid());

    FILE* fp = fopen(cmdline_path, "r");
    if (!fp) return false;

    char cmdline[256] = {0};
    fgets(cmdline, sizeof(cmdline), fp);
    fclose(fp);

    return strcmp(cmdline, target_name) == 0;
}




void hack_injec() {
	while (!unityMap.isValid()) {
        unityMap = KittyMemory::getLibraryBaseMap("libunity.so");
		anogsMap = KittyMemory::getLibraryBaseMap("libanogs.so");
		il2cppMap = KittyMemory::getLibraryBaseMap("libil2cpp.so");
		
        sleep(6);
	}
    
 sleep(5);
    Il2CppAttach();
    
    if (mlovinit()) {
        setShader("_AlphaMask"); //Varies according to game
        LogShaders();
        Wallhack();
    }

A64HookFunction(Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("COW.GamePlay"), OBFUSCATE("Player"), OBFUSCATE("UpdateBehavior"), 2), (void *) _LateUpdate, (void **) &LateUpdate);
   	OpenURL = (void (*)(String *))Il2CppGetMethodOffset("UnityEngine.CoreModule.dll","UnityEngine","Application","OpenURL",1);

    ImGuiOK = true;
    
}


void hack_thread(pid_t pid) {
	
	StartGUI();
	while(pid == -1){pid = get_pid_by_name("com.dts.freefireth");} 
	remote_inject(pid);
	writeLog(to_string(pid));
    
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void * reserved) {
jvm = vm;
JNIEnv *env;
vm->GetEnv((void **) &env, JNI_VERSION_1_6); 
return JNI_VERSION_1_6;
}

__attribute__((constructor))
void lib_main()
{
    std::thread thread_hack(hack_thread, get_pid_by_name("com.dts.freefireth"));
    thread_hack.detach();
}
//REGISTER_ZYGISK_MODULE(MyModule)

// SRC FULLY CREDIT BY : @RISHABHx999
// JISNE CREDIT HATAYA USKI MAA MUJHSE CHUD TI HE 😂

//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//Aimkill By @RISHABHx999//
