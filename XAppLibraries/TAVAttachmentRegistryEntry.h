//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAttachmentRegistryEntry_h
#define TAVAttachmentRegistryEntry_h
@import Foundation;

@class NSObject;

@interface TAVAttachmentRegistryEntry : NSObject

@property (readonly, nonatomic) unsigned long long registryTime;
@property (readonly, nonatomic) long long attachmentPriority;

/* instance methods */
- (id)initWithRegistryTime:(unsigned long long)time attachmentPriority:(long long)priority;

@end

#endif /* TAVAttachmentRegistryEntry_h */
