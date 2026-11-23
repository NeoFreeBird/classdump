//
#ifndef TFNDataViewContextMenuConfigurationContext_h
#define TFNDataViewContextMenuConfigurationContext_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSIndexPath, NSObject, NSString;

@interface TFNDataViewContextMenuConfigurationContext : NSObject <NSCopying>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) struct CGPoint { double x0; double x1; } point;

/* instance methods */
- (id)initWithIndexPath:(id)path point:(struct CGPoint { double x0; double x1; })point;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFNDataViewContextMenuConfigurationContext_h */
