//
#ifndef T1StandardStatusGrokCreateOwnButtonHandler_h
#define T1StandardStatusGrokCreateOwnButtonHandler_h
@import Foundation;

@class NSObject;

@interface T1StandardStatusGrokCreateOwnButtonHandler : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *controller;
    NSNumber"16@0:8 *scribeContext;
    NSNumber"16@0:8 *grokFeatures;
    NSNumber"16@0:8 *deeplinkOpener;
}

/* instance methods */
- (id)initWithAccount:(id)account controller:(id)controller scribeContext:(id)context;
- (void)handleStatusViewEventWithEvent:(id)event;
- (void)openImaginePostWithGrokPostID:(id)id xPostID:(long long)id source:(long long)source;
- (id)init;

@end

#endif /* T1StandardStatusGrokCreateOwnButtonHandler_h */
