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
