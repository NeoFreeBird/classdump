//
#ifndef T1StandardStatusGrokEditPhotoButtonHandler_h
#define T1StandardStatusGrokEditPhotoButtonHandler_h
@import Foundation;

@class NSObject;

@interface T1StandardStatusGrokEditPhotoButtonHandler : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *controller;
    NSNumber"16@0:8 *scribeContext;
    NSNumber"16@0:8 *grokFeatures;
    NSNumber"16@0:8 *presentationManager;
    NSNumber"16@0:8 *displaySurface;
}

/* class methods */
+ (void)openGrokComEditHandoffWithMediaInfos:(id)infos startIndex:(id)index statusID:(id)id account:(id)account;

/* instance methods */
- (id)initWithAccount:(id)account controller:(id)controller scribeContext:(id)context;
- (id)initWithAccount:(id)account controller:(id)controller scribeContext:(id)context displaySurface:(long long)surface;
- (void)handleStatusViewEventWithEvent:(id)event;
- (id)init;

@end

#endif /* T1StandardStatusGrokEditPhotoButtonHandler_h */
