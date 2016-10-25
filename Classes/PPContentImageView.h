//
//  PPContentImageView.h
//  PPAsyncDrawingKit
//
//  Created by DSKcpp on 2016/10/19.
//  Copyright © 2016年 DSKcpp. All rights reserved.
//

#import "PPRoundedImageView.h"

@interface PPContentImageView : PPRoundedImageView
@property (nonatomic, strong) UIImageView *livePhotoImageView;
@property (nonatomic, copy) NSString *currentReadingTaskKey;
@property (nonatomic, assign) int loadState;
@property (nonatomic, assign) BOOL usesSyncLoad;
@property (nonatomic, assign) dispatch_queue_t imageLoadQueue;
@property (nonatomic, assign) BOOL placeFlagImgOutside;
@property (nonatomic, assign) BOOL clearsLayerContentsWhenViewDisappear;
@property (nonatomic, assign) long long purposeType;
@property (nonatomic, assign) BOOL allowPlayGif;
@property (nonatomic, assign) BOOL autoPlayGifIfReady;
@property (nonatomic, assign) BOOL showDownloadProgress;
@property (nonatomic, strong) UIImage *failedPlaceholder;
@property (nonatomic, assign) BOOL imageChangedAfterFadeinAnimation;
@property (nonatomic, strong, readonly) NSString *flagImageUrl;
@property (nonatomic, assign) BOOL isAnimationWhenFinalImageReceived;
@property (copy, nonatomic) id imageDidFinishSaveToDiskBlock;
@property (copy, nonatomic) id imageDidBeginDownloadBlock;
@property (copy, nonatomic) id imageDidFinishLoadFromDiskBlock;
@property (copy, nonatomic) id imageDidFinishDownloadBlock;
@property (copy, nonatomic) id buildAlternativeImageUrlsBlock;
@property (nonatomic, assign) BOOL ignoreImageMask;
@property (readonly, nonatomic, copy) NSString *imageUrl;
@property (nonatomic, assign, readonly) BOOL imageLoaded;
@property (nonatomic, strong) NSMutableArray *photoTagViews;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (NSUInteger)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)imageDrawingFinished;
- (void)setImageLoaderImage:(id)arg1 url:(id)arg2;
- (void)setFinalFlagImage:(id)arg1;
- (void)setFinalImage:(id)arg1;
- (void)changePlaceholderImage:(id)arg1;
- (void)cancelCurrentImageLoading;
- (void)setContentMode:(long long)arg1;
- (void)setPhotoTags:(id)arg1;
- (void)tagClicked:(id)arg1;
- (void)setGifImage:(id)arg1;
- (void)loadImageWithPath:(id)arg1 localCacheFileAsyncFirst:(_Bool)arg2;
- (void)setFrame:(CGRect)frame;
- (void)reloadUIElements;
- (void)setFlagTitle:(id)arg1 font:(id)arg2 textColor:(id)arg3;
- (void)setFlagUrl:(id)arg1;
- (void)setImageUrl:(NSURL *)url flagImageUrl:(id)arg2 placeholderImage:(id)arg3 localCacheFileAsyncFirst:(_Bool)arg4;
- (void)setImageUrl:(NSURL *)url flagImageUrl:(id)arg2 placeholderImage:(id)arg3;
- (void)setImageUrl:(NSURL *)url flagImageUrl:(id)arg2;
- (void)setImageUrl:(NSURL *)url placeholderImage:(id)arg2;
- (void)setImageUrl:(NSURL *)url;
- (void)offsetFlagImageViewPos:(CGSize)arg1;
- (void)resetMaskColor;
- (void)setBorderWidth:(CGFloat)borderWidth;
- (void)markAsLoaded;
- (BOOL)hiddenFlagImageView;
- (void)setHiddenFlagImageView:(BOOL)arg1;
- (BOOL)redrawsAutomaticallyWhenStateChange;
- (void)setHighlighted:(BOOL)highlighted;
@end

@interface PPContentImageView (LoadImage)
- (void)loadImageWithImageUrl:(NSURL *)url placeholderImage:(UIImage *)placeholderImage;
@end

@interface PPContentImageView (PPRoundRectImage)
- (void)pp_setRoundRectImageWithURL:(NSURL *)url placeholder:(UIImage *)placeholder cropSize:(CGSize)cropSize;
@end
