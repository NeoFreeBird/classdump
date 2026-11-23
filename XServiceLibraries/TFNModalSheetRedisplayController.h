//
#ifndef TFNModalSheetRedisplayController_h
#define TFNModalSheetRedisplayController_h
@import Foundation;

@class NSObject, UIWindow;

@interface TFNModalSheetRedisplayController : NSObject

@property (weak, nonatomic) UIWindow *window;
@property (nonatomic) _Bool isRedisplayQueued;
@property (nonatomic) _Bool isRedisplayingModals;
@property (nonatomic) _Bool hasDeferredRequestToRedisplayModals;

/* instance methods */
- (id)initWithWindow:(id)window;
- (id)_tfn_rootModalToRedisplay;
- (void)redisplayModalSheets;
- (void)_tfn_redisplayModalSheetsInternal;
- (void)_tfn_doneRedisplayingModals;
- (void)_tfn_presentModals:(id)modals from:(id)from at:(long long)at;

@end

#endif /* TFNModalSheetRedisplayController_h */
