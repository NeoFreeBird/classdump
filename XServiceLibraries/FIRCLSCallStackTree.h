//
#ifndef FIRCLSCallStackTree_h
#define FIRCLSCallStackTree_h
@import Foundation;

@class NSArray, NSObject;

@interface FIRCLSCallStackTree : NSObject

@property (retain) NSArray *threads;
@property (nonatomic) _Bool callStackPerThread;

/* instance methods */
- (id)initWithMXCallStackTree:(id)tree;
- (void)flattenSubFrames:(id)frames intoFrames:(id)frames;
- (id)getArrayRepresentation;
- (id)getDictionaryRepresentation:(id)representation;
- (id)getFramesOfBlamedThread;
- (id)convertFramesFor:(id)_for;

@end

#endif /* FIRCLSCallStackTree_h */
