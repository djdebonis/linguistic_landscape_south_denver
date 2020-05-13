# soc_ling_final

Linguistic landscape on the East and West sides of the Platte River in South Denver: competing frequencies & functions of Spanish. Final project for Introduction to Social Linguistics course at The Unviersity of Colorado, Denver, taught by Gabriela DeRobles.

The code is still a mess.

## (1.0) Introduction
### (1.1) Linguistic landscapes

Spoken language has consistently proven a difficult entity to research because it--like a cultural value--is highly untangible; this intangible component of society is referred to as a mentifact. Methods have been developed to study spoken language, but all of these methods involve quantifying the concrete, physical component of spoken language, which is sound, but sound is transient and bound completely to the construct of time. There is, however, a more persistent manifestation of language--written word.

Writing, unlike spoken language, is an artifact of society. The sum of the writing in an environment is referred to as a linguistic landscape. Linguistic landscapes are often studied because--with the proper analysis--they are reflections of the diversity, culture, practices, perceptions, and values of a society. 

### (1.2) Linguistic barriers: Geographical and social distance

Geographical distance is a large factor in the character of populations. A prime example of this is seen in the instance of gene flow (how gene frequencies change as a result of contact between populations), where, as geographical distance increases, gene frequencies are spread across populations, increasing biological diversification, and, eventually, leading to the development of a new species. Further, gene flow is not a mere one-directional shift, but can also occur with contact between populations. This same pattern can be seen with language, as well (Huisman, Majid, & van Hout, 2019). Geograpical distance plays a large role in the development of new dialects and langauges, as well as the outcomes of language contact phenomena such as pidginization, creolization, and dialect mixing & leveling. 

Geographical distance can be seen as a function of a combination of the time and energy required to travel a specific distance. Traditionally, large geographical barriers (such as mountains or rivers) increase this geographical distance because they increase both the time & energy required to cover the alloted distance. And so, these geographical barriers eventually result in large differences in the populations on either side of the barrier. To continue the biological analogy, this phenomenon occurs with speciation in biological evolution; an example of this is how humans' last common ancestors, Bonobos and Chimpanzees, likely speciated due to the development of the Congo river. And, once again, geographical barriers also play a role in geographical distance relating to language. Pulgram (1969), for example, notes the paramount impact that mountain ranges played on the deviation of Vulgar Latin in ancient Italy, and, eventually, the profound linguistic diversification of modern Italian dialects. The mountain ranges were barriers that required much larger energy stores & time periods to cover short distances that would not be intangible on flat-ground. This limited contact between groups, thus increasing the geographical distance, and eventually the linguistic difference, between them.

Geographical distance is not the only contributing factor, though. The linguistic configuration of an area--as well as the probability of contact between language communities/groups--is a function of three major factors: time, space, and social setting (Huisman, Majid, & van Hout, 2019). 

In terms of temporal factors, there is the obvious fact that, if two languages are in the same place at different times, there is likely to be no contact between them (unless, ofcourse, there is a physical component of the language, suc as writing). However, the amount of time alloted for contact between groups or separation of groups also plays into this. Space mostly denotes the geographical distance covered above, but also refers to population density--a function of volume of space and frequency of language use. Finally, there is social setting, which refers to the abstract relationship between concepts such as social and cultural values, perceptions, practices, and so on. 

Although social factors are less tangible, they are highly interrelated with geographical distance. Social distance could be defined as the degree of difference between socio-psycho-cultural qualities, as well as the *perception of* that difference). Social distance functions very similarly to geographical distance (Trudgill, 2000), for it isolates (alienates) groups, and eventually leads to larger linguistic difference. Social distance will be touched on in this study, but it will not be the primary emphasis.

Although most of the theory and research relating to geographical distance and geographical barriers as functions of linguistic distance focuses on spoken language, many parallels can be drawn to linguistic landscapes. Although linguistic landscapes do not 'communicate' and 'interact' to the same degree as spoken language, the communities and populations that develop the linguistic landscapes do. And so this study will explore a relatively small geographical barrier in South Denver, as well as the role it may play in in the linguistic landscapes on either side of that barrier.


## (2.0) Materials and methods

### (2.1) The geographical space

The geographical space in Greater Denver Area that was elected for this study is a relatively rectangular map that exists between Colfax Avenue to the North, Havana to the East, Hampden/285 to the South, and Kipling to the West. Although these four major roads were carefully elected as the bounds of the experiment, the space of the study stretches slightly beyond each of the roads in order to contain linguistic storefront features on all sides of their respective intersections (see Figure 1).

![](images/current_study.png)

*Figure 1: Approximate area of current study (red) with approx. tracing of South Platte River (blue) (https://www.google.com/maps)*

This elected space, which henceforth be referred to as ‘South Denver,’ is inhabited primarily by Denver county (Figure 2), but it also reaches into portions of Arapahoe County towards the East and Jefferson County towards the West. In terms of city divisions, the ‘South Denver’ space  is once again primarily dominated by the (southern half of) the City of Denver. However, the space technically stretches outside the bounds of Denver proper: on the East side of the South Platte the allotted space also stretches slightly into the City of Aurora; on the West side of the South Platte the allotted space also contains the City of Sheridan and portions of the City of Lakewood. Portions of the City of Englewood are split across the East and West sides of the South Platte, but the proportion is much higher on the East side. 

![](images/counties.png)

*Figure 2: Approximate area of study (red) relative to cities and counties of Greater Denver Area (http://www.metrodenver.org/do-business/communities/)*

The South Platte River through South Denver was elected as the centerpiece of this study. The South Platte--although not a large river--parallels two high-traffic highways (I-25 and Hgwy 85, culminating to a portion of 'Route 85'), as well as many parks and open spaces: this will henceforth be referred to as the 'Platte Barrier'. Within the bounds of elected space, there are only 10 roads that pass across the South Platte Barrier--which averages out to about one road every 0.64 miles.

Although the Platte Barrier is not a major geographical barrier when compared to, say, the Rocky Mountains, or the Mississippi river in Memphis Tenesse, there is a bottleneck friction associated with crossing it, for all of the traffic is funneled into only 10 roads; also, the barrier (especially further North) inhibits foot and bike traffic since many of the roads that cross it are bridges with high-speed vehicle traffic. However--more than anything else--the Platte Barrier represents a social barrier between the East and West sides. If demographic groups are distinguished on either side, people of any demographic are less likely to cross that barrier when they move.(I need to find >1 article on Linguistic Landscapes to site.)

### (2.2) Sampling & randomization

Within the aforementioned bounds, six busy East/West streets were elected: Colfax Ave, Sixth Ave, Alameda Ave, Mississippi Ave, Jewell Ave, and Hampden Ave/Hgwy 285. Then, within the same bounds, four busy North/South streets were elected on the East side of the Platte Barrier: Kipling St, Wadsworth Blvd, Sheridan Blvd, and Federal Blvd, as well as 4 on the West side: Broadway, University Blvd, Colorado Blvd, and Havana St.

After the streets were assigned, C++ was used to combine the streets into 48 intersections--24 on either end--which were stored in two arrays. Then, a function utilizing a pseudorandom number generator was used to randomly select intersections on either end of the Platte. Using this code, a simple random sample (with replacement) was executed to elect 14 total intersections: seven on the East side of the Platte Barrier, and seven on the West side. These were written to a text document which was then manually edited for replacements. Conditions for replacement and reslection were as follows: (1) the intersection does not exist; (2) the intersection was discovered to be a highway-crossing (i.e. a bridge crosses over one of the cross streets); (3) the intersection was discovered to have no storefronts (e.g. it was in a residental neighborhood); and (4) the intersection was already selected and either chosen or replaced for reasons (1), (2), or (3). 

### (2.3) Data Collection

For each intersection in the sample, GPS coordinates were recorded at the centerpoint of the cross-streets. Then, data was collected for the signs of each storefront adjacent to the intersection; there was not a numerical standardization for how far the storefront stretched from the intersection, however none of the storefronts exceeded one block from the intersection. Signs were coded into two main categories: maintitle & subtitle. Maintitle refered to the large, primary sign of the business/store; this was often--but not always--the name of the business. Subtitle may have refered to any additional signage that communicated information about the business: hours of operation, product and service descriptions, and open/closed signs would account for most of--but would not limit--the breadth of the subtitle sign component. Each storefront was 'visited' using Google Maps, a screenshot was taken, and data was recorded into a CSV file. 

All private businesses were counted, including but not limited to gas stations, restaurants, autobody repair shops, hospitals, banks, car dealerships, and grocery stores. Absolutely no government, traffic, & property regulation signage was included in the dataset (e.g. "No Loitering," "Tejon St.," "No se fuma," etc.). No billboards were included in the dataset. (See limitations.)


### (2.4) Language coding parameters

Because the focus of the present study is Spanish, Spanish language usage was broken into four categories then assigned to each component of the sign (maintitle and subtitle):

**(1) Spanish (span):** if the language in the respective sign component was strictly Spanish--with no other languages present--the sign component was coded as 'Spanish,' or span.

**(2) Spanglish (spangl):** Spanglish was determined as a combination of Spanish and English lexicon, grammar, and nomenclature within a single phrase. For example, if a sign read "Santiago's Burritos," the sign was codes as Spanglish because: "Santiago" is a traditionally Spanish name, "Burrito" is a Spanish word that is borrowed in English, and the "'s" is a possesive morpheme in English but not in Spanish. (See Figure 3: "Taxes Unidos Services," and Figure 4: "Sol Tattoo" for more examples.)

![](images/taxes_unidos.png)
*Figure 3: "Taxes Unidos Services" Spanglish maintitle example (https://www.google.com/maps)*


<img src="images/sol_tattoo.png" width="400">
*Figure 4: "Sol Tattoo" Spanglish maintitle example (https://www.google.com/maps)*


**(3) Translation (transl):** Translation was determined to be a combination of Spanish and English where and expression in either one of the languages was translated into an equivelant (or close match) in the other language. An example of this is seen below, where "Coin Laundry" is translated after a slash as "Lavanderia," and "Free dry with wash" is translated below as "Secado gratis con lavado" (Figure 5).

<img src="images/lavanderia.png" width="500">
*Figure 5: "Coin Laundry/Lavanderia" Translation maintitle and subtitle example (https://www.google.com/maps)*


**(4) Mix (mix):** If the sign component contained both Spanish and English, but the phrases were distinct/separate and the uses of each language denoted different signifcances, then the sign component was coded as "Mix" (mix). As can be seen below in the subtitle in Figure 6, "Hours:" is translated into "Horarios," yet the days (e.g. "Mon - Turs") are as well as "Orders to go" are only depicted in English, while still again "Restaurante" and "Jaliciense" (of or relating to Mexican state of Jalisco) are only depicted in Spanish.

![](images/ponchos_subtitle.png)
*Figure 6: "Poncho's Mexican Resaurant" Mix subtitle example (https://www.google.com/maps)*


All use of English--excluding English presence in Spanglish, Mix, & Translate contexts (see above)--was coded as "English" (engl). All other language usage was coded as "Other" (other). The word "Colorado" was excluded from the parameters of sign coding because it is traditionally a Spanish adjective, yet it is also the name of the state, and thus it would be confounding. 

### (2.5) Data analysis and representation

All of the data calculation, analysis, and representation was completed in a Python notebook in Jupyter Lab utilizing libraries: matplotlib, numpy, pandas, scipy.stats, and statistics (see analysis&representation.ipynb). (The code is honestly a mess right now. The data collection took far longer than was expected, and the code was written in a hurry to assure completion of the final project by the deadline.)

## (3.0) Results

Seven intersections (n = 14) on each end of the Platte Barrier were examined and analyzed. Across those 14 intersections a sample of storefronts (n = 121) were collected; there was an average of 8.64 storefronts per intersection across the entire sample.

On the East end of the Platte Barrier there was an average of 9.71 storefronts per intersection (n = 68); on the West end of the Platte Barrier there was an average of 7.57 storefronts per intersection (n = 53). 


## (4.0) Discussion

### (4.x) Limitations

## (5.0) Conclusion



## References

http://www.metrodenver.org/do-business/communities/

https://www.google.com/maps