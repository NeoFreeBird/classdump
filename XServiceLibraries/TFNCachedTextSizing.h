//
#ifndef TFNCachedTextSizing_h
#define TFNCachedTextSizing_h
@import Foundation;

#include "TFSObjectCache.h"

@class NSObject;

@interface TFNCachedTextSizing : NSObject {
    /* instance variables */
    TFSObjectCache *_sizeCache;
}

/* class methods */
+ (id)sharedCachedTextSizing;
+ (void)setMaxCacheSize:(unsigned long long)size;

/* instance methods */
- (id)init;
- (struct CGSize { double x0; double x1; })tfn_sizeForString:(id)string withFont:(id)font skipCache:(_Bool)cache;
- (struct CGSize { double x0; double x1; })tfn_sizeForString:(id)string withFont:(id)font;
- (struct CGSize { double x0; double x1; })tfn_sizeForString:(id)string withFont:(id)font width:(double)width lineBreakMode:(long long)mode;
- (struct CGSize { double x0; double x1; })tfn_sizeForString:(id)string withFont:(id)font width:(double)width lineBreakMode:(long long)mode skipCache:(_Bool)cache;
- (struct CGSize { double x0; double x1; })tfn_sizeForString:(id)string withFont:(id)font width:(double)width lineBreakMode:(long long)mode multiline:(_Bool)multiline skipCache:(_Bool)cache;
- (struct CGSize { double x0; double x1; })tfn_sizeForString:(id)string withFont:(id)font width:(double)width lineBreakMode:(long long)mode multiline:(_Bool)multiline;
- (id)tfn_truncatedTextForString:(id)string withFont:(id)font width:(double)width;

@end

#endif /* TFNCachedTextSizing_h */
