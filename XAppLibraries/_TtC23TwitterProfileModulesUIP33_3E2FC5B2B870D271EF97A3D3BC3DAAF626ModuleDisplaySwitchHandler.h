//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23TwitterProfileModulesUIP33_3E2FC5B2B870D271EF97A3D3BC3DAAF626ModuleDisplaySwitchHandler_h
#define _TtC23TwitterProfileModulesUIP33_3E2FC5B2B870D271EF97A3D3BC3DAAF626ModuleDisplaySwitchHandler_h
@import Foundation;

#include "TFNMenuSheetActionItemSwitchDelegate-Protocol.h"

@class NSObject;

@interface TwitterProfileModulesUI.(ModuleDisplaySwitchHandler in _3E2FC5B2B870D271EF97A3D3BC3DAAF6) : NSObject <TFNMenuSheetActionItemSwitchDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 modulesSettingsDataSource;
    @40@0:8:16@24@32 moduleID;
    @40@0:8:16@24@32 toggleAction;
    @40@0:8:16@24@32 profileModulesContext;
}

/* instance methods */
- (void)menuSheetActionItemSwitchStateDidUpdate:(_Bool)update;
- (id)init;

@end

#endif /* _TtC23TwitterProfileModulesUIP33_3E2FC5B2B870D271EF97A3D3BC3DAAF626ModuleDisplaySwitchHandler_h */
