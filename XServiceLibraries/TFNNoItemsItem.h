//
#ifndef TFNNoItemsItem_h
#define TFNNoItemsItem_h
@import Foundation;

@class NSObject, NSString;

@interface TFNNoItemsItem : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *detailText;

/* instance methods */
- (id)initWithText:(id)text detailText:(id)text;

@end

#endif /* TFNNoItemsItem_h */
