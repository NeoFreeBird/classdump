//
#ifndef T1StatusViewPrerollCTAEventHandler_h
#define T1StatusViewPrerollCTAEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewPrerollCTAEventHandler : NSObject

/* class methods */
+ (void)handleStatusViewEvent:(id)event controller:(id)controller;
+ (void)handlePrerollCTATapFromController:(id)controller ctaModel:(id)model account:(id)account status:(id)status;
+ (void)_t1_openWebsiteFromController:(id)controller ctaModel:(id)model account:(id)account;
+ (void)_t1_openWebsiteDockedVideoFromController:(id)controller ctaModel:(id)model account:(id)account status:(id)status;

@end

#endif /* T1StatusViewPrerollCTAEventHandler_h */
