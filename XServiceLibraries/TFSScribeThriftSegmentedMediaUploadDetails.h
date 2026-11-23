//
#ifndef TFSScribeThriftSegmentedMediaUploadDetails_h
#define TFSScribeThriftSegmentedMediaUploadDetails_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSObject, NSString;

@interface TFSScribeThriftSegmentedMediaUploadDetails : NSObject <TBase, NSCoding>

@property (nonatomic) int segmentSize;
@property (readonly, nonatomic) _Bool segmentSizeIsSet;
@property (nonatomic) int uploadedSegmentCount;
@property (readonly, nonatomic) _Bool uploadedSegmentCountIsSet;
@property (nonatomic) int initializeRetryCount;
@property (readonly, nonatomic) _Bool initializeRetryCountIsSet;
@property (nonatomic) int appendRetryCount;
@property (readonly, nonatomic) _Bool appendRetryCountIsSet;
@property (nonatomic) int finalizeRetryCount;
@property (readonly, nonatomic) _Bool finalizeRetryCountIsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSegmentSize:(int)size uploadedSegmentCount:(int)count initializeRetryCount:(int)count appendRetryCount:(int)count finalizeRetryCount:(int)count;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (void)validate;

@end

#endif /* TFSScribeThriftSegmentedMediaUploadDetails_h */
