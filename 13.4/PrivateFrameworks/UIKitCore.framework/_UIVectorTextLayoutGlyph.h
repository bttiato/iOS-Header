//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIVectorTextLayoutGlyph-Protocol.h>

@class NSString, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UIVectorTextLayoutGlyph : NSObject <_UIVectorTextLayoutGlyph>
{
    unsigned short _glyph;
    UIBezierPath *_path;
    struct CGRect _rect;
    struct CGAffineTransform _pathTransform;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGAffineTransform pathTransform; // @synthesize pathTransform=_pathTransform;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) unsigned short glyph; // @synthesize glyph=_glyph;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

