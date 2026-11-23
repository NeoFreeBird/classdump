//
#ifndef TFNMenuSheetConfiguration_h
#define TFNMenuSheetConfiguration_h
@import Foundation;

@class NSArray, NSObject, NSString, UIImage;

@interface TFNMenuSheetConfiguration : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long titleStyle;
@property (retain, nonatomic) UIImage *titleImage;
@property (nonatomic) struct CGSize { double x0; double x1; } titleImageSize;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) UIImage *messageIcon;
@property (copy, nonatomic) NSString *messageIconName;
@property (copy, nonatomic) NSArray *actionItemSections;

/* instance methods */
- (id)init;

@end

#endif /* TFNMenuSheetConfiguration_h */
