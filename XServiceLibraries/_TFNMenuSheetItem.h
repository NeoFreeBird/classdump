//
#ifndef _TFNMenuSheetItem_h
#define _TFNMenuSheetItem_h
@import Foundation;

@class NSObject;

@interface _TFNMenuSheetItem : NSObject

@property (readonly, nonatomic) id rawItem;
@property (readonly, nonatomic) unsigned long long type;

/* instance methods */
- (id)initWithRawItem:(id)item type:(unsigned long long)type;

@end

#endif /* _TFNMenuSheetItem_h */
