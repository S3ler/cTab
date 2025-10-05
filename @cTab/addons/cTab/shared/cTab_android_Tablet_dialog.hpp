#ifndef CTAB_ANDROID_TABLET_DIALOG_H
#define CTAB_ANDROID_TABLET_DIALOG_H
// FIXME: Adding header guard will most likely break cTab_Tablet_dialog.hpp and cTab_android_dialog.hpp

#define GUI_GRID_W	(GUI_GRID_H * 3/4)
#define GUI_GRID_Y	(safezoneY + (safezoneH - GUI_GRID_H) / 2)

#endif

#ifndef CTAB_ANDROID_DIALOG_H
#define CTAB_ANDROID_DIALOG_H

#endif

/*

PS C:\Users\SomeDude\Documents\GitHub\cTab\@cTab> hemtt check
 INFO Config loaded for cTab Advanced 2.8.0.6-af4a
 WARN Addon name cTab is not lowercase, it is highly recommended to use lowercase names
 INFO Running checks
 INFO Validated 3 files for binarization
 INFO Rapified 10 addon configs
help[L-C12]: Math could be unquoted
   ┌─ addons/cTab/TAD/cTab_TAD_display.hpp:68:8
   │
68 │             w = pxToScreen_W(cTab_GUI_TAD_OSD_ELEMENT_MODE_W * 2);
   │                 ^ reducible to: 0.023935547
   │
   = note: Could remove quotes to allow evaluation at build-time


warning[FNL]: File `\addons\cTab\shared\cTab_android_Tablet_dialog.hpp` is missing a newline at the end
 = help: Run `hemtt utils fnl` to insert newlines at the end of files


warning[L-C14]: external class RscCombo is never used
   ┌─ addons/core/ui/technicaldata.hpp:13:7
   │
13 │ class RscCombo;
   │       ^^^^^^^^ never used


warning[L-C14]: external class RscCheckbox is never used
   ┌─ addons/core/ui/technicaldata.hpp:14:7
   │
14 │ class RscCheckbox;
   │       ^^^^^^^^^^^ never used


warning[PW1]: redefining macro
   ┌─ addons/cTab/android/cTab_android_dialog.hpp:10:9
   │
10 │ #define GUI_GRID_H  (safezoneH * 1.4)
   │         ^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/tablet/cTab_Tablet_dialog.hpp:13:9
   │
13 │ #define GUI_GRID_H  (safezoneH * 1.2)
   │         ---------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/android/cTab_android_dialog.hpp:11:9
   │
11 │ #define GUI_GRID_W  (GUI_GRID_H * 3/4)
   │         ^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/tablet/cTab_Tablet_dialog.hpp:14:9
   │
14 │ #define GUI_GRID_W  (GUI_GRID_H * 3/4)
   │         ---------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/android/cTab_android_dialog.hpp:12:9
   │
12 │ #define GUI_GRID_X  (safezoneX + (safezoneW - GUI_GRID_W) / 2)
   │         ^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/tablet/cTab_Tablet_dialog.hpp:19:9
   │
19 │ #define GUI_GRID_X  (safezoneX + (safezoneW - GUI_GRID_W) / 2 + (GUI_GRID_W * 96.5 / 2048))
   │         ---------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/android/cTab_android_dialog.hpp:13:9
   │
13 │ #define GUI_GRID_Y  (safezoneY + (safezoneH - GUI_GRID_H) / 2)
   │         ^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/tablet/cTab_Tablet_dialog.hpp:20:9
   │
20 │ #define GUI_GRID_Y  (safezoneY + (safezoneH - GUI_GRID_H) / 2)
   │         ---------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/android/cTab_android_controls.hpp:7:9
  │
7 │ #define GUI_GRID_PX_W 2048
  │         ^^^^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/tablet/cTab_Tablet_controls.hpp:7:9
  │
7 │ #define GUI_GRID_PX_W 2048
  │         ------------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/android/cTab_android_controls.hpp:9:9
  │
9 │ #define GUI_GRID_PX_H 2048
  │         ^^^^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/tablet/cTab_Tablet_controls.hpp:9:9
  │
9 │ #define GUI_GRID_PX_H 2048
  │         ------------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/android/cTab_android_controls.hpp:12:9
   │
12 │ #define pxToScreen_X(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_W * GUI_GRID_W + GUI_GRID_X)
   │         ^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/tablet/cTab_Tablet_controls.hpp:12:9
   │
12 │ #define pxToScreen_X(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_W * GUI_GRID_W + GUI_GRID_X)
   │         ------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/android/cTab_android_controls.hpp:13:9
   │
13 │ #define pxToScreen_Y(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_H * GUI_GRID_H + GUI_GRID_Y)
   │         ^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/tablet/cTab_Tablet_controls.hpp:13:9
   │
13 │ #define pxToScreen_Y(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_H * GUI_GRID_H + GUI_GRID_Y)
   │         ------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/android/cTab_android_controls.hpp:14:9
   │
14 │ #define pxToScreen_W(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_W * GUI_GRID_W)
   │         ^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/tablet/cTab_Tablet_controls.hpp:14:9
   │
14 │ #define pxToScreen_W(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_W * GUI_GRID_W)
   │         ------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/android/cTab_android_controls.hpp:15:9
   │
15 │ #define pxToScreen_H_Value(PIXEL) (PIXEL) / GUI_GRID_PX_H * GUI_GRID_H
   │         ^^^^^^^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/tablet/cTab_Tablet_controls.hpp:15:9
   │
15 │ #define pxToScreen_H_Value(PIXEL) (PIXEL) / GUI_GRID_PX_H * GUI_GRID_H
   │         ------------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/android/cTab_android_controls.hpp:16:9
   │
16 │ #define pxToScreen_H(PIXEL) QUOTE(pxToScreen_H_Value(PIXEL))
   │         ^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/tablet/cTab_Tablet_controls.hpp:16:9
   │
16 │ #define pxToScreen_H(PIXEL) QUOTE(pxToScreen_H_Value(PIXEL))
   │         ------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/android/cTab_android_controls.hpp:35:9
   │
35 │ #define pxToGroup_X(PIXEL) QUOTE(((PIXEL) - cTab_GUI_android_SCREEN_CONTENT_X) / GUI_GRID_PX_W * GUI_GRID_W)
   │         ^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/tablet/cTab_Tablet_controls.hpp:35:9
   │
35 │ #define pxToGroup_X(PIXEL) QUOTE(((PIXEL) - cTab_GUI_tablet_SCREEN_CONTENT_X) / GUI_GRID_PX_W * GUI_GRID_W)
   │         ----------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/android/cTab_android_controls.hpp:36:9
   │
36 │ #define pxToGroup_Y(PIXEL) QUOTE(((PIXEL) - cTab_GUI_android_SCREEN_CONTENT_Y) / GUI_GRID_PX_H * GUI_GRID_H)
   │         ^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/tablet/cTab_Tablet_controls.hpp:36:9
   │
36 │ #define pxToGroup_Y(PIXEL) QUOTE(((PIXEL) - cTab_GUI_tablet_SCREEN_CONTENT_Y) / GUI_GRID_PX_H * GUI_GRID_H)
   │         ----------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/android/cTab_android_dialog.hpp:19:9
   │
19 │ #define MENU_sizeEx pxToScreen_H_Value(27)
   │         ^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/tablet/cTab_Tablet_dialog.hpp:24:9
   │
24 │ #define MENU_sizeEx pxToScreen_H_Value(cTab_GUI_tablet_OSD_TEXT_STD_SIZE)
   │         ----------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_dialog.hpp:1:9
   │
 1 │ #define GUI_GRID_H  (safezoneH * 1.6)
   │         ^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/android/cTab_android_dialog.hpp:10:9
   │
10 │ #define GUI_GRID_H  (safezoneH * 1.4)
   │         ---------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_dialog.hpp:2:9
   │
 2 │ #define GUI_GRID_W  (GUI_GRID_H * 3/4)
   │         ^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/android/cTab_android_dialog.hpp:11:9
   │
11 │ #define GUI_GRID_W  (GUI_GRID_H * 3/4)
   │         ---------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_dialog.hpp:3:9
   │
 3 │ #define GUI_GRID_X  (safezoneX + (safezoneW - GUI_GRID_W) / 2)
   │         ^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/android/cTab_android_dialog.hpp:12:9
   │
12 │ #define GUI_GRID_X  (safezoneX + (safezoneW - GUI_GRID_W) / 2)
   │         ---------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_dialog.hpp:4:9
   │
 4 │ #define GUI_GRID_Y  (safezoneY + (safezoneH - GUI_GRID_H) / 2)
   │         ^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/android/cTab_android_dialog.hpp:13:9
   │
13 │ #define GUI_GRID_Y  (safezoneY + (safezoneH - GUI_GRID_H) / 2)
   │         ---------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/FBCB2/cTab_FBCB2_controls.hpp:3:9
  │
3 │ #define GUI_GRID_PX_W 2048
  │         ^^^^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/android/cTab_android_controls.hpp:7:9
  │
7 │ #define GUI_GRID_PX_W 2048
  │         ------------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/FBCB2/cTab_FBCB2_controls.hpp:5:9
  │
5 │ #define GUI_GRID_PX_H 2048
  │         ^^^^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/android/cTab_android_controls.hpp:9:9
  │
9 │ #define GUI_GRID_PX_H 2048
  │         ------------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_controls.hpp:8:9
   │
 8 │ #define pxToScreen_X(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_W * GUI_GRID_W + GUI_GRID_X)
   │         ^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/android/cTab_android_controls.hpp:12:9
   │
12 │ #define pxToScreen_X(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_W * GUI_GRID_W + GUI_GRID_X)
   │         ------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_controls.hpp:9:9
   │
 9 │ #define pxToScreen_Y(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_H * GUI_GRID_H + GUI_GRID_Y)
   │         ^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/android/cTab_android_controls.hpp:13:9
   │
13 │ #define pxToScreen_Y(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_H * GUI_GRID_H + GUI_GRID_Y)
   │         ------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_controls.hpp:10:9
   │
10 │ #define pxToScreen_W(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_W * GUI_GRID_W)
   │         ^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/android/cTab_android_controls.hpp:14:9
   │
14 │ #define pxToScreen_W(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_W * GUI_GRID_W)
   │         ------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_controls.hpp:11:9
   │
11 │ #define pxToScreen_H_Value(PIXEL) (PIXEL) / GUI_GRID_PX_H * GUI_GRID_H
   │         ^^^^^^^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/android/cTab_android_controls.hpp:15:9
   │
15 │ #define pxToScreen_H_Value(PIXEL) (PIXEL) / GUI_GRID_PX_H * GUI_GRID_H
   │         ------------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_controls.hpp:12:9
   │
12 │ #define pxToScreen_H(PIXEL) QUOTE(pxToScreen_H_Value(PIXEL))
   │         ^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/android/cTab_android_controls.hpp:16:9
   │
16 │ #define pxToScreen_H(PIXEL) QUOTE(pxToScreen_H_Value(PIXEL))
   │         ------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_controls.hpp:31:9
   │
31 │ #define pxToGroup_X(PIXEL) QUOTE(((PIXEL) - cTab_GUI_FBCB2_SCREEN_CONTENT_X) / GUI_GRID_PX_W * GUI_GRID_W)
   │         ^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/android/cTab_android_controls.hpp:35:9
   │
35 │ #define pxToGroup_X(PIXEL) QUOTE(((PIXEL) - cTab_GUI_android_SCREEN_CONTENT_X) / GUI_GRID_PX_W * GUI_GRID_W)
   │         ----------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_controls.hpp:32:9
   │
32 │ #define pxToGroup_Y(PIXEL) QUOTE(((PIXEL) - cTab_GUI_FBCB2_SCREEN_CONTENT_Y) / GUI_GRID_PX_H * GUI_GRID_H)
   │         ^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/android/cTab_android_controls.hpp:36:9
   │
36 │ #define pxToGroup_Y(PIXEL) QUOTE(((PIXEL) - cTab_GUI_android_SCREEN_CONTENT_Y) / GUI_GRID_PX_H * GUI_GRID_H)
   │         ----------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_dialog.hpp:8:9
   │
 8 │ #define MENU_sizeEx pxToScreen_H_Value(cTab_GUI_FBCB2_OSD_TEXT_STD_SIZE)
   │         ^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/android/cTab_android_dialog.hpp:19:9
   │
19 │ #define MENU_sizeEx pxToScreen_H_Value(27)
   │         ----------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/TAD/cTab_TAD_dialog.hpp:1:9
  │
1 │ #define GUI_GRID_X  (safezoneX + (safezoneW - safezoneH * 0.8 * 3/4) / 2)
  │         ^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/FBCB2/cTab_FBCB2_dialog.hpp:3:9
  │
3 │ #define GUI_GRID_X  (safezoneX + (safezoneW - GUI_GRID_W) / 2)
  │         ---------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/TAD/cTab_TAD_dialog.hpp:2:9
  │
2 │ #define GUI_GRID_Y  (safezoneY + 0.1 * safezoneH)
  │         ^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/FBCB2/cTab_FBCB2_dialog.hpp:4:9
  │
4 │ #define GUI_GRID_Y  (safezoneY + (safezoneH - GUI_GRID_H) / 2)
  │         ---------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/TAD/cTab_TAD_dialog.hpp:3:9
  │
3 │ #define GUI_GRID_W  (safezoneH * 0.8 * 3/4)
  │         ^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/FBCB2/cTab_FBCB2_dialog.hpp:2:9
  │
2 │ #define GUI_GRID_W  (GUI_GRID_H * 3/4)
  │         ---------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/TAD/cTab_TAD_dialog.hpp:4:9
  │
4 │ #define GUI_GRID_H  (safezoneH * 0.8)
  │         ^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/FBCB2/cTab_FBCB2_dialog.hpp:1:9
  │
1 │ #define GUI_GRID_H  (safezoneH * 1.6)
  │         ---------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/TAD/cTab_TAD_controls.hpp:7:9
  │
7 │ #define GUI_GRID_PX_W 2048
  │         ^^^^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/FBCB2/cTab_FBCB2_controls.hpp:3:9
  │
3 │ #define GUI_GRID_PX_W 2048
  │         ------------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/TAD/cTab_TAD_controls.hpp:9:9
  │
9 │ #define GUI_GRID_PX_H 2048
  │         ^^^^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/FBCB2/cTab_FBCB2_controls.hpp:5:9
  │
5 │ #define GUI_GRID_PX_H 2048
  │         ------------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/TAD/cTab_TAD_controls.hpp:12:9
   │
12 │ #define pxToScreen_X(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_W * GUI_GRID_W + GUI_GRID_X)
   │         ^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_controls.hpp:8:9
   │
 8 │ #define pxToScreen_X(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_W * GUI_GRID_W + GUI_GRID_X)
   │         ------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/TAD/cTab_TAD_controls.hpp:13:9
   │
13 │ #define pxToScreen_Y(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_H * GUI_GRID_H + GUI_GRID_Y)
   │         ^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_controls.hpp:9:9
   │
 9 │ #define pxToScreen_Y(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_H * GUI_GRID_H + GUI_GRID_Y)
   │         ------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/TAD/cTab_TAD_controls.hpp:14:9
   │
14 │ #define pxToScreen_W(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_W * GUI_GRID_W)
   │         ^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_controls.hpp:10:9
   │
10 │ #define pxToScreen_W(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_W * GUI_GRID_W)
   │         ------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/TAD/cTab_TAD_controls.hpp:15:9
   │
15 │ #define pxToScreen_H_Value(PIXEL) ((PIXEL) / GUI_GRID_PX_H * GUI_GRID_H)
   │         ^^^^^^^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_controls.hpp:11:9
   │
11 │ #define pxToScreen_H_Value(PIXEL) (PIXEL) / GUI_GRID_PX_H * GUI_GRID_H
   │         ------------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/TAD/cTab_TAD_controls.hpp:16:9
   │
16 │ #define pxToScreen_H(PIXEL) QUOTE(pxToScreen_H_Value(PIXEL))
   │         ^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_controls.hpp:12:9
   │
12 │ #define pxToScreen_H(PIXEL) QUOTE(pxToScreen_H_Value(PIXEL))
   │         ------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/TAD/cTab_TAD_dialog.hpp:10:9
   │
10 │ #define MENU_sizeEx pxToScreen_H_Value(cTab_GUI_TAD_OSD_TEXT_STD_SIZE)
   │         ^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/FBCB2/cTab_FBCB2_dialog.hpp:8:9
   │
 8 │ #define MENU_sizeEx pxToScreen_H_Value(cTab_GUI_FBCB2_OSD_TEXT_STD_SIZE)
   │         ----------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/microDAGR/cTab_microDAGR_dialog.hpp:1:9
  │
1 │ #define GUI_GRID_X  (safezoneX + (safezoneW - safezoneH * 0.8 * 3/4) / 2)
  │         ^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/TAD/cTab_TAD_dialog.hpp:1:9
  │
1 │ #define GUI_GRID_X  (safezoneX + (safezoneW - safezoneH * 0.8 * 3/4) / 2)
  │         ---------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/microDAGR/cTab_microDAGR_dialog.hpp:2:9
  │
2 │ #define GUI_GRID_Y  (safezoneY + 0.1 * safezoneH)
  │         ^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/TAD/cTab_TAD_dialog.hpp:2:9
  │
2 │ #define GUI_GRID_Y  (safezoneY + 0.1 * safezoneH)
  │         ---------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/microDAGR/cTab_microDAGR_dialog.hpp:3:9
  │
3 │ #define GUI_GRID_W  (safezoneH * 0.8 * 3/4)
  │         ^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/TAD/cTab_TAD_dialog.hpp:3:9
  │
3 │ #define GUI_GRID_W  (safezoneH * 0.8 * 3/4)
  │         ---------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/microDAGR/cTab_microDAGR_dialog.hpp:4:9
  │
4 │ #define GUI_GRID_H  (safezoneH * 0.8)
  │         ^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/TAD/cTab_TAD_dialog.hpp:4:9
  │
4 │ #define GUI_GRID_H  (safezoneH * 0.8)
  │         ---------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/microDAGR/cTab_microDAGR_controls.hpp:7:9
  │
7 │ #define GUI_GRID_PX_W 2048
  │         ^^^^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/TAD/cTab_TAD_controls.hpp:7:9
  │
7 │ #define GUI_GRID_PX_W 2048
  │         ------------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/microDAGR/cTab_microDAGR_controls.hpp:9:9
  │
9 │ #define GUI_GRID_PX_H 2048
  │         ^^^^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/TAD/cTab_TAD_controls.hpp:9:9
  │
9 │ #define GUI_GRID_PX_H 2048
  │         ------------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/microDAGR/cTab_microDAGR_controls.hpp:12:9
   │
12 │ #define pxToScreen_X(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_W * GUI_GRID_W + GUI_GRID_X)
   │         ^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/TAD/cTab_TAD_controls.hpp:12:9
   │
12 │ #define pxToScreen_X(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_W * GUI_GRID_W + GUI_GRID_X)
   │         ------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/microDAGR/cTab_microDAGR_controls.hpp:13:9
   │
13 │ #define pxToScreen_Y(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_H * GUI_GRID_H + GUI_GRID_Y)
   │         ^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/TAD/cTab_TAD_controls.hpp:13:9
   │
13 │ #define pxToScreen_Y(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_H * GUI_GRID_H + GUI_GRID_Y)
   │         ------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/microDAGR/cTab_microDAGR_controls.hpp:14:9
   │
14 │ #define pxToScreen_W(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_W * GUI_GRID_W)
   │         ^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/TAD/cTab_TAD_controls.hpp:14:9
   │
14 │ #define pxToScreen_W(PIXEL) QUOTE((PIXEL) / GUI_GRID_PX_W * GUI_GRID_W)
   │         ------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/microDAGR/cTab_microDAGR_controls.hpp:15:9
   │
15 │ #define pxToScreen_H_Value(PIXEL) (PIXEL) / GUI_GRID_PX_H * GUI_GRID_H
   │         ^^^^^^^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/TAD/cTab_TAD_controls.hpp:15:9
   │
15 │ #define pxToScreen_H_Value(PIXEL) ((PIXEL) / GUI_GRID_PX_H * GUI_GRID_H)
   │         ------------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/microDAGR/cTab_microDAGR_controls.hpp:16:9
   │
16 │ #define pxToScreen_H(PIXEL) QUOTE(pxToScreen_H_Value(PIXEL))
   │         ^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/TAD/cTab_TAD_controls.hpp:16:9
   │
16 │ #define pxToScreen_H(PIXEL) QUOTE(pxToScreen_H_Value(PIXEL))
   │         ------------ previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/shared/cTab_mail_title.hpp:7:9
  │
7 │ #define GUI_GRID_H  (0.048)
  │         ^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/microDAGR/cTab_microDAGR_dialog.hpp:4:9
  │
4 │ #define GUI_GRID_H  (safezoneH * 0.8)
  │         ---------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/shared/cTab_mail_title.hpp:8:9
  │
8 │ #define GUI_GRID_W  (GUI_GRID_H * 3/4)
  │         ^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/microDAGR/cTab_microDAGR_dialog.hpp:3:9
  │
3 │ #define GUI_GRID_W  (safezoneH * 0.8 * 3/4)
  │         ---------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/shared/cTab_mail_title.hpp:9:9
  │
9 │ #define GUI_GRID_X  (safezoneX + safezoneW * (1 - 0.00675) - GUI_GRID_W)
  │         ^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/microDAGR/cTab_microDAGR_dialog.hpp:1:9
  │
1 │ #define GUI_GRID_X  (safezoneX + (safezoneW - safezoneH * 0.8 * 3/4) / 2)
  │         ---------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/shared/cTab_mail_title.hpp:10:9
   │
10 │ #define GUI_GRID_Y  (safezoneY + safezoneH * 0.25)
   │         ^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/microDAGR/cTab_microDAGR_dialog.hpp:2:9
   │
 2 │ #define GUI_GRID_Y  (safezoneY + 0.1 * safezoneH)
   │         ---------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/TAD/cTab_TAD_display.hpp:6:9
  │
6 │ #define cTab_TAD_DLGtoDSP_fctr (1)
  │         ^^^^^^^^^^^^^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/TAD/cTab_TAD_dialog.hpp:6:9
  │
6 │ #define cTab_TAD_DLGtoDSP_fctr (0.86 / GUI_GRID_H)
  │         ---------------------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/TAD/cTab_TAD_display.hpp:8:9
  │
8 │ #define GUI_GRID_X  (safeZoneX + GUI_MARGIN_X * 3/4)
  │         ^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/shared/cTab_mail_title.hpp:9:9
  │
9 │ #define GUI_GRID_X  (safezoneX + safezoneW * (1 - 0.00675) - GUI_GRID_W)
  │         ---------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/TAD/cTab_TAD_display.hpp:9:9
   │
 9 │ #define GUI_GRID_Y  (safeZoneY + safeZoneH - GUI_TAD_H - GUI_MARGIN_Y)
   │         ^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/shared/cTab_mail_title.hpp:10:9
   │
10 │ #define GUI_GRID_Y  (safezoneY + safezoneH * 0.25)
   │         ---------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/TAD/cTab_TAD_display.hpp:10:9
   │
10 │ #define GUI_GRID_W  (GUI_TAD_W * 3/4)
   │         ^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/shared/cTab_mail_title.hpp:8:9
   │
 8 │ #define GUI_GRID_W  (GUI_GRID_H * 3/4)
   │         ---------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/TAD/cTab_TAD_display.hpp:11:9
   │
11 │ #define GUI_GRID_H  (GUI_TAD_H)
   │         ^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/shared/cTab_mail_title.hpp:7:9
   │
 7 │ #define GUI_GRID_H  (0.048)
   │         ---------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/microDAGR/cTab_microDAGR_display.hpp:1:9
  │
1 │ #define GUI_MARGIN_X    (-0.05)
  │         ^^^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/TAD/cTab_TAD_display.hpp:1:9
  │
1 │ #define GUI_MARGIN_X    (0.05)
  │         ------------ previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/microDAGR/cTab_microDAGR_display.hpp:2:9
  │
2 │ #define GUI_MARGIN_Y    (0.2)
  │         ^^^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/TAD/cTab_TAD_display.hpp:2:9
  │
2 │ #define GUI_MARGIN_Y    (0.2)
  │         ------------ previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/microDAGR/cTab_microDAGR_display.hpp:6:9
  │
6 │ #define cTab_microDAGR_DLGtoDSP_fctr (1)
  │         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/microDAGR/cTab_microDAGR_dialog.hpp:6:9
  │
6 │ #define cTab_microDAGR_DLGtoDSP_fctr (0.86 / GUI_GRID_H)
  │         ---------------------------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/microDAGR/cTab_microDAGR_display.hpp:8:9
  │
8 │ #define GUI_GRID_X  (safeZoneX + GUI_MARGIN_X * 3/4)
  │         ^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/TAD/cTab_TAD_display.hpp:8:9
  │
8 │ #define GUI_GRID_X  (safeZoneX + GUI_MARGIN_X * 3/4)
  │         ---------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/microDAGR/cTab_microDAGR_display.hpp:9:9
  │
9 │ #define GUI_GRID_Y  (safeZoneY + safeZoneH - GUI_microDAGR_H - GUI_MARGIN_Y)
  │         ^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/TAD/cTab_TAD_display.hpp:9:9
  │
9 │ #define GUI_GRID_Y  (safeZoneY + safeZoneH - GUI_TAD_H - GUI_MARGIN_Y)
  │         ---------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/microDAGR/cTab_microDAGR_display.hpp:10:9
   │
10 │ #define GUI_GRID_W  (GUI_microDAGR_W * 3/4)
   │         ^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/TAD/cTab_TAD_display.hpp:10:9
   │
10 │ #define GUI_GRID_W  (GUI_TAD_W * 3/4)
   │         ---------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/microDAGR/cTab_microDAGR_display.hpp:11:9
   │
11 │ #define GUI_GRID_H  (GUI_microDAGR_H)
   │         ^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/TAD/cTab_TAD_display.hpp:11:9
   │
11 │ #define GUI_GRID_H  (GUI_TAD_H)
   │         ---------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/android/cTab_android_display.hpp:7:9
   │
 7 │ #define GUI_GRID_W  (0.86)
   │         ^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/microDAGR/cTab_microDAGR_display.hpp:10:9
   │
10 │ #define GUI_GRID_W  (GUI_microDAGR_W * 3/4)
   │         ---------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/android/cTab_android_display.hpp:8:9
   │
 8 │ #define GUI_GRID_H  (GUI_GRID_W * 4/3)
   │         ^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/microDAGR/cTab_microDAGR_display.hpp:11:9
   │
11 │ #define GUI_GRID_H  (GUI_microDAGR_H)
   │         ---------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
  ┌─ addons/cTab/android/cTab_android_display.hpp:9:9
  │
9 │ #define GUI_GRID_X  (safezoneX - GUI_GRID_W * 0.17)
  │         ^^^^^^^^^^ redefining macro
  │
  ┌─ addons/cTab/microDAGR/cTab_microDAGR_display.hpp:8:9
  │
8 │ #define GUI_GRID_X  (safeZoneX + GUI_MARGIN_X * 3/4)
  │         ---------- previous definition here
  │
  = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/android/cTab_android_display.hpp:10:9
   │
10 │ #define GUI_GRID_Y  (safezoneY + safezoneH * 0.88 - GUI_GRID_H * 0.72)
   │         ^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/microDAGR/cTab_microDAGR_display.hpp:9:9
   │
 9 │ #define GUI_GRID_Y  (safeZoneY + safeZoneH - GUI_microDAGR_H - GUI_MARGIN_Y)
   │         ---------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/android/cTab_android_display.hpp:12:9
   │
12 │ #define cTab_android_DLGtoDSP_fctr (1)
   │         ^^^^^^^^^^^^^^^^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/android/cTab_android_dialog.hpp:15:9
   │
15 │ #define cTab_android_DLGtoDSP_fctr (0.86 / GUI_GRID_H)
   │         -------------------------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[PW1]: redefining macro
   ┌─ addons/cTab/android/cTab_android_display.hpp:16:9
   │
16 │ #define MENU_sizeEx pxToScreen_H_Value(cTab_GUI_android_OSD_TEXT_STD_SIZE)
   │         ^^^^^^^^^^^ redefining macro
   │
   ┌─ addons/cTab/TAD/cTab_TAD_dialog.hpp:10:9
   │
10 │ #define MENU_sizeEx pxToScreen_H_Value(cTab_GUI_TAD_OSD_TEXT_STD_SIZE)
   │         ----------- previous definition here
   │
   = help: `#undef` macros before redefining them


warning[L-C14]: external class InventoryItem_Base_F is never used
   ┌─ addons/cTab/config.cpp:70:9
   │
70 │     class InventoryItem_Base_F;
   │           ^^^^^^^^^^^^^^^^^^^^ never used


error[L-C04]: class's parent is not present
    ┌─ addons/cTab/TAD/cTab_TAD_controls.hpp:703:14
    │
703 │     class Name: Name
    │                 ^^^^ not present in config
    │
    = help: add `class Name;` to the config to declare it as external


error[L-C01]: property's value could not be parsed
    ┌─ addons/cTab/tablet/cTab_Tablet_dialog.hpp:135:13
    │
135 │                     text = "\cTab\img\icon_mail_ca.paa" ;
    │                            ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ invalid value
    │
    = help: use quotes `"` around the value


error[L-C01]: property's value could not be parsed
    ┌─ addons/cTab/tablet/cTab_Tablet_dialog.hpp:143:13
    │
143 │                     text = "z\ctab\addons\intel\data\feed_ca.paa" ;
    │                            ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ invalid value
    │
    = help: use quotes `"` around the value


error[L-C01M]: macro's result could not be parsed
   ┌─ addons/cTab/shared/cTab_mail_title.hpp:30:8
   │
30 │             x = GUI_GRID_X;
   │                 ^^^^^^^^^^ invalid macro result
   │
   = note: The processed output was:
           (safezoneX + safezoneW * (1 - 0.00675) - ((0.048) * 3/4))
   = help: perhaps this macro has a `Q_` variant or you need `QUOTE(..)`


error[L-C01M]: macro's result could not be parsed
   ┌─ addons/cTab/shared/cTab_mail_title.hpp:31:8
   │
31 │             y = GUI_GRID_Y;
   │                 ^^^^^^^^^^ invalid macro result
   │
   = note: The processed output was:
           (safezoneY + safezoneH * 0.25)
   = help: perhaps this macro has a `Q_` variant or you need `QUOTE(..)`


PS C:\Users\SomeDude\Documents\GitHub\cTab\@cTab>


 */
