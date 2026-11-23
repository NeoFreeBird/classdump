//
#ifndef TFNGenericItem_h
#define TFNGenericItem_h
@import Foundation;

@class NSObject;

@interface TFNGenericItem : NSObject

@property (copy, nonatomic) id /* block */ cellForRowAtIndexPathBlock;
@property (copy, nonatomic) id /* block */ collectionViewCellForItemAtIndexPathBlock;
@property (copy, nonatomic) id /* block */ heightForRowAtIndexPathBlock;
@property (copy, nonatomic) id /* block */ collectionViewSizeForItemAtIndexPathBlock;
@property (copy, nonatomic) id /* block */ didSelectRowAtIndexPathBlock;
@property (copy, nonatomic) id /* block */ shouldSelectRowAtIndexPathBlock;
@property (copy, nonatomic) id /* block */ shouldHighlightRowAtIndexPathBlock;
@property (copy, nonatomic) id /* block */ debugStringsBlock;
@property (retain, nonatomic) id userInfo;

/* class methods */
+ (id)itemWithTitle:(id)title subtitle:(id)subtitle disclosure:(_Bool)disclosure;
+ (id)centeredItemWithTitle:(id)title;
+ (id)dividerWithTitle:(id)title textColor:(id)color;
+ (id)blankWithHeight:(double)height;
+ (id)bareText:(id)text color:(id)color;

/* instance methods */
- (id)tfs_debugStrings;

@end

#endif /* TFNGenericItem_h */
