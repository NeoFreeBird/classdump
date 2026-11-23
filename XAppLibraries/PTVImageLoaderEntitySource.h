//
#ifndef PTVImageLoaderEntitySource_h
#define PTVImageLoaderEntitySource_h
@import Foundation;

#include "PTVImageLoaderSource-Protocol.h"
#include "PTVProfileImageEntity-Protocol.h"

@class NSObject, NSString;

@interface PTVImageLoaderEntitySource : NSObject <PTVImageLoaderSource>

@property (readonly, nonatomic) id <PTVProfileImageEntity> profileImageEntity;
@property (readonly, nonatomic) unsigned long long formatType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProfileImageEntity:(id)entity formatType:(unsigned long long)type;
- (_Bool)isEqualToSource:(id)source;
- (_Bool)isEqualToEntitySource:(id)source;
- (id)context;
- (void)performLoad:(id)load withCachePolicy:(long long)policy;

@end

#endif /* PTVImageLoaderEntitySource_h */
