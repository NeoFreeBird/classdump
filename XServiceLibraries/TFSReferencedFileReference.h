//
#ifndef TFSReferencedFileReference_h
#define TFSReferencedFileReference_h
@import Foundation;

@class NSObject, NSString;

@interface TFSReferencedFileReference : NSObject

@property (readonly, copy, nonatomic) NSString *path;

/* instance methods */
- (id)initWithPath:(id)path;
- (void)dealloc;

@end

#endif /* TFSReferencedFileReference_h */
