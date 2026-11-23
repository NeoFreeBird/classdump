//
#ifndef T1ProfileDisplayContentProviderDelegate_Protocol_h
#define T1ProfileDisplayContentProviderDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ProfileDisplayContentProviderDelegate <NSObject>

@required

/* required instance methods */
- (void)displayContentProvider:(id)provider didSelectMainEntry:(id)entry;
- (void)displayContentProviderDidUpdateMainValidity:(id)validity;
- (void)displayContentProviderDidUpdateSubheaderValidity:(id)validity;
- (void)displayContentProviderDidUpdateModalContentHeight:(id)height;
- (_Bool)isDisplayContentProviderCurrent:(id)current;
- (_Bool)isUserDataDisplayableForDisplayContentProvider:(id)provider;
- (id)viewControllerForDisplayContentProvider:(id)provider;
- (void)displayContentProviderWillLoadInitialTimeline:(id)timeline;
- (void)displayContentProviderDidLoadInitialTimeline:(id)timeline;

@optional

@end

#endif /* T1ProfileDisplayContentProviderDelegate_Protocol_h */
