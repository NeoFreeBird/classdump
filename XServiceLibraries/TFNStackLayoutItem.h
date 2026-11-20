//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNStackLayoutItem_h
#define TFNStackLayoutItem_h
@import Foundation;

#include "TFNStackLayout.h"

@class NSObject;

@interface TFNStackLayoutItem : NSObject

@property (readonly, nonatomic) long long itemIdentifier;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) _Bool visible;
@property (readonly, nonatomic) TFNStackLayoutItem *previousVisibleItem;
@property (readonly, nonatomic) TFNStackLayoutItem *nextVisibleItem;
@property (nonatomic) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) double topContentInset;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } baselineEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } additionalEdgeInsets;
@property (readonly, nonatomic) TFNStackLayout *representedLayout;

/* instance methods */
- (id)initWithItemIdentifier:(long long)identifier;
- (id)init;
- (_Bool)isVisible;
- (void)addAdditionalEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)invalidateLayout;

@end

#endif /* TFNStackLayoutItem_h */
