//
#ifndef T1SearchHomeNavigationBarTitleViewPlugin_h
#define T1SearchHomeNavigationBarTitleViewPlugin_h
@import Foundation;

#include "T1SearchFeatures.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "_TtP11TwitterHome29HomeNavigationBarPluginSource_-Protocol.h"
#include "_TtP11TwitterHome32HomeNavigationBarTitleViewPlugin_-Protocol.h"

@class NSObject, NSString, TFNNavigationBarSearchView, UIView;

@interface T1SearchHomeNavigationBarTitleViewPlugin : NSObject <TwitterHome.HomeNavigationBarTitleViewPlugin> {
    /* instance variables */
    T1SearchFeatures *_searchFeatures;
    TFNNavigationBarSearchView *_navigationBarSearchView;
    id <TFSTwitterLegacyScribeLogMethods> _scribe;
}

@property (weak, nonatomic) id <TwitterHome.HomeNavigationBarPluginSource> pluginSource;
@property (readonly, nonatomic) UIView *titleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSearchFeatures:(id)features scribe:(id)scribe;
- (void)dealloc;
- (void)homeTimelineContainerDidAppear;
- (void)_t1_action_didTapSearchBar:(id)bar;
- (void)_updateNavigationBar;

@end

#endif /* T1SearchHomeNavigationBarTitleViewPlugin_h */
