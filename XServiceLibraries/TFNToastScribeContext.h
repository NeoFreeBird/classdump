//
#ifndef TFNToastScribeContext_h
#define TFNToastScribeContext_h
@import Foundation;

@class NSDictionary, NSObject, NSString;

@interface TFNToastScribeContext : NSObject

@property (readonly, nonatomic) unsigned long long componentType;
@property (readonly, nonatomic) NSString *component;
@property (readonly, copy, nonatomic) NSString *element;
@property (readonly, copy, nonatomic) NSDictionary *parameters;

/* class methods */
+ (id)contextWithElement:(id)element componentType:(unsigned long long)type;

/* instance methods */
- (id)initWithScribeElement:(id)element componentType:(unsigned long long)type parameters:(id)parameters;
- (id)init;

@end

#endif /* TFNToastScribeContext_h */
