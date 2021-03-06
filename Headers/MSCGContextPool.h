//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BCObjectPool.h"

@interface MSCGContextPool : BCObjectPool
{
    struct CGColorSpace *_colorSpace;
    struct CGSize _contextSize;
}

@property(nonatomic) struct CGSize contextSize; // @synthesize contextSize=_contextSize;
@property(nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void)recycleContext:(struct CGContext *)arg1;
- (struct CGContext *)vendOrCreateContextOfSize:(struct CGSize)arg1;
- (BOOL)vendsSize:(struct CGSize)arg1 colorSpace:(struct CGColorSpace *)arg2;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 colorSpace:(struct CGColorSpace *)arg2;

@end

