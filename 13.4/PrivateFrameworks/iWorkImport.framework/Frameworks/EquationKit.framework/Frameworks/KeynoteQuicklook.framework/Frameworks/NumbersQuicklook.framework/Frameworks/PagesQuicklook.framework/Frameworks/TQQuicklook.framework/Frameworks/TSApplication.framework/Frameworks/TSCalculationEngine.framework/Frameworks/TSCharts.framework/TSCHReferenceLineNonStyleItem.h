//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, TSCHReferenceLineNonStyle;

@interface TSCHReferenceLineNonStyleItem : NSObject
{
    TSCHReferenceLineNonStyle *mNonStyle;
    NSUUID *mUUID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSCHReferenceLineNonStyle *nonStyle; // @synthesize nonStyle=mNonStyle;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=mUUID;
-     // Error parsing type: v32@0:8@16^{ChartReferenceLineNonStyleItem=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{Reference}^{UUID}}24, name: saveToArchiver:message:
-     // Error parsing type: @32@0:8@16r^{ChartReferenceLineNonStyleItem=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{Reference}^{UUID}}24, name: initFromUnarchiver:message:
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithNonStyle:(id)arg1 uuid:(id)arg2;

@end

