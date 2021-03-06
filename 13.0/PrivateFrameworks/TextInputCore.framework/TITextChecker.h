//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _TIUITextChecking;

@interface TITextChecker : NSObject
{
    id <_TIUITextChecking> _checker;
}

+ (id)_UITextCheckerWithAsynchronousLoading:(_Bool)arg1;
@property(readonly, nonatomic) id <_TIUITextChecking> checker; // @synthesize checker=_checker;
- (void).cxx_destruct;
- (struct _NSRange)checkSpellingOfString:(id)arg1 startingAt:(long long)arg2 language:(id)arg3 wrap:(_Bool)arg4 correction:(id *)arg5;
- (_Bool)doneLoading;
- (id)initWithAsynchronousLoading:(_Bool)arg1;
- (id)init;

@end

