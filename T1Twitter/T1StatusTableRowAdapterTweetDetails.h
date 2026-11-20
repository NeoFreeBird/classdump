//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusTableRowAdapterTweetDetails_h
#define T1StatusTableRowAdapterTweetDetails_h
@import Foundation;

#include "T1ShowStatusNavigationContext.h"

@class NSObject, TFNTwitterAccount, TFSTwitterScribeContext;

@interface T1StatusTableRowAdapterTweetDetails : NSObject

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly, nonatomic) T1ShowStatusNavigationContext *statusNavigationContext;

/* instance methods */
- (id)initWithAccount:(id)account scribeContext:(id)context statusNavigationContext:(id)context;
- (id)initWithAccount:(id)account scribeContext:(id)context;
- (id)init;
- (void)presentDetailForStatus:(id)status inTableViewController:(id)controller;
- (id)tableViewController:(id)controller didSelectStatus:(id)status;

@end

#endif /* T1StatusTableRowAdapterTweetDetails_h */
