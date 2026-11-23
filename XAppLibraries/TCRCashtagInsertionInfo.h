//
#ifndef TCRCashtagInsertionInfo_h
#define TCRCashtagInsertionInfo_h
@import Foundation;

@class NSObject, NSString;

@interface TCRCashtagInsertionInfo : NSObject

@property (readonly, copy, nonatomic) NSString *ticker;
@property (readonly, copy, nonatomic) NSString *smartTag;
@property (readonly, nonatomic) unsigned long long dollarSignOffset;

/* instance methods */
- (id)initWithTicker:(id)ticker smartTag:(id)tag dollarSignOffset:(unsigned long long)offset;

@end

#endif /* TCRCashtagInsertionInfo_h */
