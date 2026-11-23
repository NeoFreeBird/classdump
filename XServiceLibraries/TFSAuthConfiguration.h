//
#ifndef TFSAuthConfiguration_h
#define TFSAuthConfiguration_h
@import Foundation;

@class NSObject;

@interface TFSAuthConfiguration : NSObject

@property (nonatomic) unsigned long long maxGuestAuthRetryAttempts;

/* instance methods */
- (id)init;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFSAuthConfiguration_h */
