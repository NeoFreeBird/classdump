//
#ifndef _TtC23TwitterProfileModulesUIP33_3E2FC5B2B870D271EF97A3D3BC3DAAF613ModuleAdapter_h
#define _TtC23TwitterProfileModulesUIP33_3E2FC5B2B870D271EF97A3D3BC3DAAF613ModuleAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface TwitterProfileModulesUI.(ModuleAdapter in _3E2FC5B2B870D271EF97A3D3BC3DAAF6) : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 switchHandler;
    @40@0:8:16@24@32 modulesSettingsDataSource;
    @40@0:8:16@24@32 toggleAction;
    @40@0:8:16@24@32 profileModulesContext;
}

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC23TwitterProfileModulesUIP33_3E2FC5B2B870D271EF97A3D3BC3DAAF613ModuleAdapter_h */
