//
#ifndef GADInlineMultipleNativeAdsRenderer_h
#define GADInlineMultipleNativeAdsRenderer_h
@import Foundation;

#include "GADAdRendering-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_group;

@interface GADInlineMultipleNativeAdsRenderer : NSObject <GADAdRendering> {
    /* instance variables */
    NSMutableDictionary *_renderingResults;
    NSObject<OS_dispatch_group> *_renderingGroup;
    NSMutableArray *_nativeJSContextMonitors;
    NSMutableSet *_renderers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)renderWithServerTransaction:(id)transaction adConfiguration:(id)configuration completionHandler:(id /* block */)handler;

@end

#endif /* GADInlineMultipleNativeAdsRenderer_h */
