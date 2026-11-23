//
#ifndef T1SearchHomeNavigationBarButtonItemPlugin_h
#define T1SearchHomeNavigationBarButtonItemPlugin_h
@import Foundation;

#include "T1SearchFeatures.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "_TtP11TwitterHome29HomeNavigationBarPluginSource_-Protocol.h"
#include "_TtP11TwitterHome33HomeNavigationBarButtonItemPlugin_-Protocol.h"

@class NSObject, NSString, UIBarButtonItem;

@interface T1SearchHomeNavigationBarButtonItemPlugin : NSObject <TwitterHome.HomeNavigationBarButtonItemPlugin> {
    /* instance variables */
    T1SearchFeatures *_searchFeatures;
    id <TFSTwitterLegacyScribeLogMethods> _scribe;
}

@property (weak, nonatomic) id <TwitterHome.HomeNavigationBarPluginSource> pluginSource;
@property (readonly, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSearchFeatures:(id)features scribe:(id)scribe;
- (void)homeTimelineContainerDidAppear;

@end

#endif /* T1SearchHomeNavigationBarButtonItemPlugin_h */
