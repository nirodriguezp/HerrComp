#include <random>
#include <iostream>
#include <cstdlib>
#include <vector>

void compute_pdf(int seed, int nsamples, double mu, double sigma, double xmin, double xmax, int nbins);

int main(int argc, char **argv)
{
  const int SEED = std::atoi(argv[1]);
  const int NSAMPLES = std::atoi(argv[2]);
  const double MU = std::atof(argv[3]);
  const double SIGMA = std::atof(argv[4]);
  const double XMIN = std::atof(argv[5]);
  const double XMAX = std::atof(argv[6]);
  const int NBINS = std::atoi(argv[7]);
  std::cout.setf(std::ios::scientific);

  compute_pdf(SEED, NSAMPLES, MU, SIGMA, XMIN, XMAX, NBINS);
}

void compute_pdf(int seed, int nsamples, double mu, double sigma, double xmin, double xmax, int nbins)
{
  // random stuff
  std::mt19937 gen(seed);
  std::normal_distribution<double> dis{mu, sigma};
  // TODO: histogram stuff
  double res=(xmax-xmin)/nbins;
  std::vector<int> hist;
  std::vector<double> pdf;
  hist.resize(nbins);
  pdf.resize(nbins);

  for(int n = 0; n < nsamples; ++n) {
    double r = dis(gen);
    // TODO: fill here the counting histogram
    for(int i = 1; i <= nbins; i++){

        if(r >= xmin+(i-1)*res && r <= xmin+i*res){
            hist[i-1] = hist[i-1]+1;
        }
    }
  }
  // TODO: compute and print the pdf
  for(int i = 0; i < nbins; i++){

    pdf[i] = hist[i];
    pdf[i]= pdf[i]/(nsamples*res);
    std::cout << xmin+res*i << "\t" << pdf[i] << "\n";
  }
}
