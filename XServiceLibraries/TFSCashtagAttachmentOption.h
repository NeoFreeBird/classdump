//
#ifndef TFSCashtagAttachmentOption_h
#define TFSCashtagAttachmentOption_h
@import Foundation;

@class NSNumber, NSObject, NSString;

@interface TFSCashtagAttachmentOption : NSObject

@property (readonly, copy, nonatomic) NSString *restId;
@property (readonly, nonatomic) long long sizeVariant;
@property (readonly, copy, nonatomic) NSNumber *fromTimestampMs;
@property (readonly, copy, nonatomic) NSNumber *toTimestampMs;
@property (readonly, copy, nonatomic) NSString *timeframe;
@property (readonly, copy, nonatomic) NSString *candleSize;

/* instance methods */
- (id)initWithRestId:(id)id sizeVariant:(long long)variant fromTimestampMs:(id)ms toTimestampMs:(id)ms timeframe:(id)timeframe candleSize:(id)size;

@end

#endif /* TFSCashtagAttachmentOption_h */
