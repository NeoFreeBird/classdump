//
#ifndef TFSTwitterTypeaheadCashtag_h
#define TFSTwitterTypeaheadCashtag_h
@import Foundation;

@class NSNumber, NSObject, NSString;

@interface TFSTwitterTypeaheadCashtag : NSObject // (Swift)

@property (nonatomic, readonly) NSString *ticker;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *price;
@property (nonatomic, readonly) NSNumber *marketCap;
@property (nonatomic, readonly) NSNumber *change24hPercent;
@property (nonatomic, readonly) NSString *currency;
@property (nonatomic, readonly) NSString *logoURL;
@property (nonatomic, readonly) NSString *contractAddress;
@property (nonatomic, readonly) NSString *cryptoChainLogoURL;
@property (nonatomic, readonly) NSString *exchange;
@property (nonatomic, readonly) NSString *exchangeDisplayName;
@property (nonatomic, readonly) _Bool isCrypto;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) NSString *smartTag;

/* instance methods */
- (id)initWithTicker:(id)ticker name:(id)name price:(id)price marketCap:(id)cap change24hPercent:(id)percent currency:(id)currency logoURL:(id)url contractAddress:(id)address cryptoChainLogoURL:(id)url exchange:(id)exchange exchangeDisplayName:(id)name isCrypto:(_Bool)crypto score:(double)score smartTag:(id)tag;
- (id)init;

@end

#endif /* TFSTwitterTypeaheadCashtag_h */
