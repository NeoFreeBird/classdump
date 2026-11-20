//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
