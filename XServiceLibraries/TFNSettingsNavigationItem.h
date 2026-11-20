//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNSettingsNavigationItem_h
#define TFNSettingsNavigationItem_h
@import Foundation;

@class NSObject, NSString, UIImage;

@interface TFNSettingsNavigationItem : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *detail;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) id /* block */ controllerFactoryCompletion;
@property (copy, nonatomic) id /* block */ didSelectBlock;

/* instance methods */
- (id)init;
- (id)initWithTitle:(id)title controllerFactory:(id /* block */)factory;
- (id)initWithTitle:(id)title detail:(id)detail controllerFactory:(id /* block */)factory;
- (id)initWithTitle:(id)title detail:(id)detail iconName:(id)name controllerFactory:(id /* block */)factory;
- (id)initWithTitle:(id)title detail:(id)detail iconName:(id)name iconRenderingMode:(long long)mode controllerFactory:(id /* block */)factory;
- (id)initWithTitle:(id)title detail:(id)detail iconName:(id)name controllerFactoryCompletion:(id /* block */)completion;
- (id)initWithTitle:(id)title detail:(id)detail iconName:(id)name iconRenderingMode:(long long)mode controllerFactoryCompletion:(id /* block */)completion;
- (void)makeControllerWithCompletion:(id /* block */)completion;

@end

#endif /* TFNSettingsNavigationItem_h */
