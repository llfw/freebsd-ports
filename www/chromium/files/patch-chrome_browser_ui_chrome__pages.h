--- chrome/browser/ui/chrome_pages.h.orig	2024-05-21 18:07:39 UTC
+++ chrome/browser/ui/chrome_pages.h
@@ -38,7 +38,7 @@ enum class ConsentLevel;
 }  // namespace signin
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 namespace web_app {
 enum class AppSettingsPageEntryPoint;
 }  // namespace web_app
@@ -263,7 +263,7 @@ void ShowShortcutCustomizationApp(Profile* profile,
 #endif
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_FUCHSIA)
+    BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
 // Show chrome://app-settings/<app-id> page.
 void ShowWebAppSettings(Browser* browser,
                         const std::string& app_id,
