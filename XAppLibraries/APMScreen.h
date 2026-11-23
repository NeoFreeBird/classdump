//
#ifndef APMScreen_h
#define APMScreen_h
@import Foundation;

@class NSObject, NSString;

@interface APMScreen : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *className;
@property (readonly, nonatomic) long long instanceID;
@property (nonatomic) _Bool isManuallySet;
@property (nonatomic) _Bool isManuallyTracked;
@property (nonatomic) double eventTimestamp;

/* instance methods */
- (id)initWithName:(id)name className:(id)name instanceID:(long long)id;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* APMScreen_h */
