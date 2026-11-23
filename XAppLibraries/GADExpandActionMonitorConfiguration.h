//
#ifndef GADExpandActionMonitorConfiguration_h
#define GADExpandActionMonitorConfiguration_h
@import Foundation;

#include "GADClickProtection.h"
#include "GADFullScreenAdViewController.h"
#include "GADSwappableView.h"

@class NSDictionary, NSObject, UIView;

@interface GADExpandActionMonitorConfiguration : NSObject

@property (readonly, nonatomic) GADClickProtection *clickProtection;
@property (readonly, weak, nonatomic) GADFullScreenAdViewController *presenter;
@property (readonly, weak, nonatomic) GADSwappableView *swappableView;
@property (weak, nonatomic) UIView *referenceView;
@property (readonly, nonatomic) _Bool customCloseBlocked;
@property (readonly, nonatomic) NSDictionary *storeKitParameters;

/* instance methods */
- (id)initWithPresenter:(id)presenter referenceView:(id)view customCloseBlocked:(_Bool)blocked clickProtection:(id)protection storeKitParameters:(id)parameters;
- (id)initWithSwappableView:(id)view referenceView:(id)view customCloseBlocked:(_Bool)blocked clickProtection:(id)protection storeKitParameters:(id)parameters;

@end

#endif /* GADExpandActionMonitorConfiguration_h */
