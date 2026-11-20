//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBChoiceBoxedStyleDataViewItem_h
#define ONBChoiceBoxedStyleDataViewItem_h
@import Foundation;

@class NSObject, NSString, v24@?0@"TTMAssetRenderingResult"8@"NSError"16;

@interface ONBChoiceBoxedStyleDataViewItem : NSObject { // (Swift)
    /* instance variables */
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 isSelected;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *titleText;
@property (nonatomic, readonly) NSString *subTitleText;

/* instance methods */
- (id)initWithTitle:(id)title subTitle:(id)title isSelected:(_Bool)selected identifier:(id)identifier;
- (id)init;

@end

#endif /* ONBChoiceBoxedStyleDataViewItem_h */
