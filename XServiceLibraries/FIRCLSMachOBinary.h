//
#ifndef FIRCLSMachOBinary_h
#define FIRCLSMachOBinary_h
@import Foundation;

@class NSArray, NSMutableArray, NSObject, NSString, NSURL;

@interface FIRCLSMachOBinary : NSObject {
    /* instance variables */
    NSURL *_url;
    struct FIRCLSMachOFile { int fd; unsigned long long mappedSize; void *mappedFile; } _file;
}

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) NSArray *slices;
@property (readonly, copy, nonatomic) NSString *instanceIdentifier;

/* class methods */
+ (id)MachOBinaryWithPath:(id)path;
+ (id)hashNSString:(id)nsstring;

/* instance methods */
- (id)initWithURL:(id)url;
- (void)dealloc;
- (void)enumerateUUIDs:(id /* block */)uuids;
- (id)sliceForArchitecture:(id)architecture;

@end

#endif /* FIRCLSMachOBinary_h */
