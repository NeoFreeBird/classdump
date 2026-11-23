//
#ifndef GADEventContext_h
#define GADEventContext_h
@import Foundation;

#include "GADEventContextSource-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSObject, NSString;

@interface GADEventContext : NSObject <GADEventContextSource>

@property (readonly, nonatomic) GADEventContext *parent;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *componentName;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly) NSArray *componentPath;
@property (readonly, nonatomic) GADEventContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)rootContext;

/* instance methods */
- (id)initWithParent:(id)parent component:(id)component;
- (id)init;
- (void)setUserInfoObject:(id)object forKey:(id)key;

@end

#endif /* GADEventContext_h */
