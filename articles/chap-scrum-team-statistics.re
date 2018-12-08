= スクラムとチームと統計的見積り

//flushright{
@youchan
//}

@youchanです。わたしは見積りというのがとっても苦手です。
だって、私たちの仕事って、これ超やりたい！はいはいはーい！って感じでやりたいことと、ちょっとこの作業やるのだるーい。みたいな作業とあるじゃないですかっ。

それに、うーんうーん。ちゃんと作っているはずなんだけど上手く動かないなーとか。え、なにこのバグ、どこが問題なの？わっかんなーい。みたいな原因不明で思わぬ罠踏んじゃうこととか(そのほとんどは判ると、なーんだってことばっかり)あるじゃないですかっ！

そんなのお前だけだって？！そうかもしれないけど、分かってくれる人もいますよね？いるはずです！
チームで仕事をしているといろんな人がいます。人によって得意なこととか不得意なこととか違ったりするんです。それに誰かが不意に病気で休んだり、そういうことがあったりしますよね！

スクラムはチームで見積りの不確実さになんとか対抗していく術なのです。
この章では、わたしが苦手な見積りに対してどう抵抗したのか、そしてその手法のひとつとしてスクラムについて書こうと思います。

== 見積りが苦手！

そうなんです。見積りが苦手なんです。特に自分の作業に対して。

バッファを取りましょうねとか、見積りの不確実さに対する対抗方法はこの本のほかの章でも沢山書かれています。
とっても参考になると思うので、読んでくださいね。

じゃあ問題解決って、そんなことないんです。わたしの場合(わたしの他にも同じタイプの人はいるはず…)は、
見積りが苦手というより期限内に作業を終らせることが困難なんです。(どーん！)

つまりですね。期限に余裕があれば、twitterで情報収集(本当に情報収集？)したり、ちょっと凝った仕組みを取り入れたり(フレームワークつくるのが趣味なんです！)。期限に余裕がないときには、現実逃避したり、あたふたして、余計なところで嵌ったり。

つまり見積りの問題ではなかったのです。

さて、じゃあどうすればいいの？ということで、
まず、上から押しつけ的に期限が与えらることから逃げました。つまり、受託開発中心の会社から自社製品や自社サービスを作る会社に転職しました。
見積りの話からすこし離れてしまいますが、妥当な見積りを得るためにはそれを決めるプロセスをどれだけコントロールすることができるかということが重要なことです。もちろん、受託開発でもそういうことができるはずで、実際に受託開発でもうまく見積りのプロセスをコントロールしている企業はあります。
ただ、わたしの選択としては自社開発という選択をすることによって見積りをコントロールする方法を取りした。

また、わたしの問題は見積りだけではなかったわけです。なのでもっと根本的な解決を！ということで見積りプロセスだけではなく組織そのものをコントロールすることをしてきたのでそのことについて書いていきます。

== スクラムとチーム

そういうわけで何回かの転職で辿りついたU社の話をしたいと思います。
U社はスタートアップ企業で、わたしが入社した当時で5、6人のメンバーで開発をしていました。そこではスクラムを自分たちなりに解釈した軽量なプロセスで開発が進められていました。
当時はとても快適に開発をすすめることができました。何せ、見積りというものがほぼ存在していなかったのです。
これは驚くべきことなのですが、実はスタートアップの初期にはよくある話でもあります。
チーム内にプロダクトオーナーがいるので、プロダクトオーナーがコントロールできていたら、メンバーはあまり期限を気にする必要がなかったのです。

これはひとつの理想的な姿かもしれません。

しかしそんなパラダイスは長くは続きません。組織は成長していくものです。そして組織の成長にともなって開発チームへの期待も高まります。
この機能はいつまでに実装されるのかとか、次のリリースはいつなのかとかそういうことです。


チームへの期待と書きましたが、そのほとんどは期限を伴なうものです。チームの外にステークホルダーが増えるということはそういうことなのです。
ここで重要なのはそれをコントロールするということです。膨らみ続ける開発チームへの期待をすべて一身に引き受けていたら大変です。

このようにチームとステークホルダーを含めた系として開発プロセスを定義しているのがスクラムです。
スクラムについての詳細はここでは述べませんので付録として載せました参考図書を参照してください。

スクラムの重要なところは、開発の成果物に対する主導権は開発チームにあることです。もちろん何を作るべきとか、どういうユーザーストーリーを実現させたいということはプロダクトオーナーに委ねられます。
しかし、それをどのように生みだすのか？どのようなスケジュールでリリースするのかは開発チームの側に主導権があります。
(もちろんスケジュールに関してはプロダクトオーナーやステークホルダーと十分調整をする必要があります。)
上から押しつて的にスケジュールを与えられるような開発とはそのあたりが違います。

U社でも例にもれず組織が成長していくと、開発チームに対する期待も大きくなりました。開発チーム自体は10名くらいのチームになり、わたしはそのチームのマネージャーになりました。
プロダクトオーナーも代りました。ビジネスも成長してステークホルダーも増えました。営業やカスタマーサポートなどのフロントの部署(その後ろにはお客様という存在も見え隠れします。)、社長や経営陣、あるいは株主など…

そういうわけで我流のスクラムだったものを本格的にスクラムしようということになりました。

== スクラムの見積り

さて、見積りについてです。スクラムではストーリーポイントというものを使って見積りが行なわれます。
ストーリーポイントはストーリーを実現するのに必要な作業量をポイントとして振ります。このポイントの単位は何でしょう？
人月？人日？いえいえ特に単位はありません。あるとしたらポイントという単位ですね。

ストーリーポイントは作業量をだいたいこれくらいというのを相対的に表わします。
一番軽い作業は1ポイントです。その2倍くらいのボリュームなら2ポイント、3倍なら3ポイントというふうに決めていきます。(5章でも出てきましたね。)
相対的なポイントなので何を基準にするかは難しいところですが、何回かやっていくとだいたい決ってきます。

そして、アジャイルにおなじみのイテレーションの中で@<b>{チームとして}どれくらいのポイントをこなすことができるかを測るのです。
このイテレーションの中でこなすことのできるストーリーポイントのことをベロシティと呼びます。
ベロシティを得られれば見積りは完了です！ここまで出来れば、イテレーションの中でどれだけのストーリーを実現出来るかが分り、いつなにがリリースされるのかということはおのずと求まるわけです。
実にシンプルな話です。ここにはポイントがいくつかあります。

 * ストーリーポイントは相対的な量であること。つまり、具体的な期間だったり必要要員数とかではないということ
 * 期限から作業内容が決まるわけではないこと
 * チームとしてのアウトプットを測ることができるということ

これらのことがらについては、次の節でも重要になりますので覚えておいてくださいね。

あともう一つここで説明しなければいけないことがあります。プランニングポーカーについてです。

さきほど、ストーリーポイントを決めますという話をしましたが、これはどうやって決めているのでしょう？

その答がプランニングポーカーです。

スクラムでは見積りはチーム全員で行ないます。それぞれのストーリーに対してチームのメンバーがおのおのに思うストーリーポイントを同時に提示します。それは指の本数であらわしたり、数字の書かれたカードを掲げたり、やりかたはそれぞれですがこれをプランニングポーカーと呼んでいます。
これではそれぞれ違うポイント数を提示するということがおこるわけです。そこでどういう根拠でそのポイントを付けたのかをお互いに説明してもういちどポイントを提示します。
このとき重要なことは、自分がその作業をするならこのポイント数ということではなく、これまでに行なわれたこの作業にこれだけのポイントを必要としたのでこれだけのポイントが必要だということを示す必要があります。
つまりこれは作業時間を基準とするのではなく、誰がやっても同じポイントであるという正規化を行なうのです。
このことはチームとしてどれだけのストーリーポイントをある期間(イテレーション)内で倒すことができるかということを表わしているわけです。

このようにストーリーポイントで見積るというのがスクラムの見積りにおけるポイントなわけですが、U社で行なわれていたことについて少し補足すると、当時我々はストーポイントといいつつ、ストーリーに対してポイントを付けていたわけではなかったということです。
ストーリーというとユーザーが何々をできるようになるのような形で表わされるわけですが、我々開発者が行なう作業としてはもうすこし細分化されたタスクとして分解されます。ですので実際にはタスクのポイントとして見積りが行なわれていました。
とはいえ、リリースだったり、ステークホルダーに見せるものとしてはストーリーとして見せる必要があります。なので見積りのタスクとストーリーは実際には分離されていました。(これは単なる補足であり、見積りの方法としてはストーリー単位であってもタスク単位であっても本質的に違いはないと思います。)

== 統計的見積り

スクラムでは上記のような見積りの方法で見積りを行うわけですが、これは統計的見積りという観点で見るととても合理的であることが分ります。
統計的な見積りというのはウォーターフォール的な開発でももちろん行なわれることです。見積りの妥当性というのは統計的に検証されうるものです。ウォーターフォール的な開発とか既存の開発手法ではこの統計というのは、様々な既存の開発プロジェクトから得られた統計的指標によって得られるものです。

ところがこのような統計的指標はチームや個人の能力によって大きく差が出るものです。もちろん統計的な指標ですので沢山のデータを集めることによって、平均的な値を得ることはできます。しかし、それは自分たちのチームにおいてどの程度適用できるものかということは知ることはできません。

スクラムにおける見積りはこれを自分たちのチームに当てはめるものであります。つまり自分たちのチームで測った指標において妥当だと思われる指標を当てはめるのです。
それがベロシティです。ベロシティはチームの能力を相対的に測り、それは継続することによって統計的な妥当性を与えます。

スクラムというのはこのようにこのようにチームという単位で統計的な平準化を測ったり、イテレーションという小さな繰り返しによってなるべく多くの統計データを集めるしくみなわけです。

統計的な観点から見れば、スクラムがチームにとって妥当な統計データを得るよりよい仕組みを持っているということが分ると思います。
スクラムが単に経験的に良い手法であるということではないということが伝えられれば、本稿の目的が達成できたのではないかと思います。

== 付録: 参考文献

実を言うとわたしはあまり書籍で体系的にスクラムを学んだわけではありませんが、いくつかつまみ読みした文献とこれが良いと言われる書籍について紹介したいと思います。

 * アジャイルな見積りと計画づくり ~価値あるソフトウェアを育てる概念と技法~(http://amzn.asia/d/f3BA5Ac)
 * SCRUM BOOT CAMP THE BOOK(http://amzn.asia/d/g3DiSWM)
 * アジャイルサムライ−達人開発者への道(http://amzn.asia/d/iJUOE8z)

== 謝辞

U社において本格的なスクラムの導入には、株式会社アトラクタ(https://www.attractor.co.jp)の吉羽龍太郎様の多大なご協力をいただきました。本稿を執筆する上でも吉羽様のご助言が大きな助けになっています。感謝ととものここに謝辞を述べます。

また、当時、スクラムマスターとして、スクラムチームの構築にご尽力いただいた、神谷典孝氏にもこの場を借りて感謝を述べたいと思います。


