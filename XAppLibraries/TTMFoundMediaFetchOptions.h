//
#ifndef TTMFoundMediaFetchOptions_h
#define TTMFoundMediaFetchOptions_h
@import Foundation;

@class NSObject, NSString;

@interface TTMFoundMediaFetchOptions : NSObject

@property (copy, nonatomic) NSString *provider;
@property (copy, nonatomic) NSString *cursor;
@property (nonatomic) long long imageFormat;
@property (nonatomic) _Bool forceUpdateResultCache;
@property (nonatomic) _Bool networkAccessAllowed;
@property (nonatomic) _Bool shouldSkipMemoryCaches;
@property (nonatomic) unsigned long long maximumFramerateOverride;
@property (copy, nonatomic) id /* block */ progressHandler;

/* instance methods */
- (id)init;
- (_Bool)isNetworkAccessAllowed;

@end

#endif /* TTMFoundMediaFetchOptions_h */
