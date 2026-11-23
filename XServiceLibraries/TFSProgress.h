//
#ifndef TFSProgress_h
#define TFSProgress_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSProgress : NSObject

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) double progress;
@property (readonly, copy, nonatomic) NSArray *items;

/* instance methods */
- (id)init;
- (id)initWithProgress:(double)progress items:(id)items;

@end

#endif /* TFSProgress_h */
