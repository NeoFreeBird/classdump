//
#ifndef TGFFileColorCubeLoader_h
#define TGFFileColorCubeLoader_h
@import Foundation;

#include "TGFColorCubeLoader-Protocol.h"

@class NSObject, NSString;

@interface TGFFileColorCubeLoader : NSObject <TGFColorCubeLoader> {
    /* instance variables */
    NSString *_filePath;
}

@property (readonly, copy, nonatomic) id /* block */ decompressBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFilePath:(id)path;
- (id)initWithFilePath:(id)path decompressBlock:(id /* block */)block;
- (id)loadColorCubeDataWithIdentifier:(id)identifier;

@end

#endif /* TGFFileColorCubeLoader_h */
