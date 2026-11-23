//
#ifndef GTMKeychainHelper_Protocol_h
#define GTMKeychainHelper_Protocol_h
@import Foundation;

@class NSSet, NSString;

@protocol GTMKeychainHelper

@required

@property (nonatomic, readonly) NSString *accountName;
@property (nonatomic, readonly) NSSet *keychainAttributes;

/* required instance methods */
- (id)initWithKeychainAttributes:(id)attributes;
- (id)keychainQueryForService:(id)service;
- (id)passwordForService:(id)service error:(id *)error;
- (id)passwordDataForService:(id)service error:(id *)error;
- (_Bool)removePasswordForService:(id)service error:(id *)error;
- (_Bool)setPassword:(id)password forService:(id)service error:(id *)error;
- (_Bool)setPassword:(id)password forService:(id)service accessibility:(id)accessibility error:(id *)error;
- (_Bool)setPasswordWithData:(id)data forService:(id)service accessibility:(id)accessibility error:(id *)error;

@optional

@end

#endif /* GTMKeychainHelper_Protocol_h */
