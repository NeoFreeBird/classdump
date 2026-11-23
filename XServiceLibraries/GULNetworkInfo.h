//
#ifndef GULNetworkInfo_h
#define GULNetworkInfo_h
@import Foundation;

@class NSObject;

@interface GULNetworkInfo : NSObject

/* class methods */
+ (id)getNetworkInfo;
+ (long long)getNetworkType;
+ (id)getNetworkRadioType;

@end

#endif /* GULNetworkInfo_h */
