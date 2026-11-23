//
#ifndef TFNItemsChangeInstruction_h
#define TFNItemsChangeInstruction_h
@import Foundation;

@class NSIndexPath, NSObject;

@interface TFNItemsChangeInstruction : NSObject

@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) unsigned long long changeType;
@property (retain, nonatomic) id item;

/* instance methods */
- (id)initWithIndexPath:(id)path changeType:(unsigned long long)type item:(id)item;
- (id)description;
- (_Bool)isValidItemInstruction;
- (_Bool)isValidSectionInstruction;
- (_Bool)isSectionInstruction;
- (id)_descriptionForItem:(id)item;
- (id)_changeTypeString;

@end

#endif /* TFNItemsChangeInstruction_h */
